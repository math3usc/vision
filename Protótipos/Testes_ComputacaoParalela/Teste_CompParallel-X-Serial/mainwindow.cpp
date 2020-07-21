#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->frame->setScaledContents(true);

    image = imread("image20.png");

    time = new QTimer(this);
    connect(time,SIGNAL(timeout()),this,SLOT(workSapace()));
    time->start(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::update_frame(Mat imagem)
{
    QImage img =  QImage((uchar*) imagem.data, imagem.cols, imagem.rows,imagem.step, QImage::Format_BGR888);
    ui->frame->setPixmap(QPixmap::fromImage(img));
}

void MainWindow::update_frame_Binary(Mat imagem_Binary)
{
    QImage img =  QImage((uchar*) imagem_Binary.data, imagem_Binary.cols, imagem_Binary.rows,imagem_Binary.step, QImage::Format_Grayscale8);
    ui->frame->setPixmap(QPixmap::fromImage(img));
}

void MainWindow::extrair_limiares()
{

  Limiar = Mat(image.rows,image.cols, CV_8UC3);
  for(int j=0;j<image.rows; j++)
  {
      for (int i=0;i<image.cols;i++)
      {
          r = (int)image.at<Vec3b>(j,i)[2];
          g = (int)image.at<Vec3b>(j,i)[1];
          b = (int)image.at<Vec3b>(j,i)[0];


          if( b >= rgb[Bmin] &&  b <= rgb[Bmax] &&
              g >= rgb[Gmin] &&  g <= rgb[Gmax] &&
              r >= rgb[Rmin] &&  r <= rgb[Rmax]
           ){
              for (int k = 0; k < 3; k++) {
                  Limiar.at<Vec3b>(j,i)[k] = 255;
              }
            }
          else
          {
              for (int k = 0; k < 3; k++) {
                  Limiar.at<Vec3b>(j,i)[k] = 0;
              }
          }
      }
  }

}

void MainWindow::segmentacao(Mat Input, Scalar *limiares, Mat* Output)
{
    *Output = Mat(Input.rows,Input.cols, CV_8U);

    inRange(Input, limiares[0], limiares[1], *Output);

    //Output->convertTo(*Output,CV_8U);

    Mat element = getStructuringElement(MORPH_CROSS, Size(5, 5), Point(-1, -1));
    //Mat elementClosing = getStructuringElement(MORPH_CROSS, Size(2, 2), Point(-1, -1));
    //morphologyEx(*Output, *Output,MORPH_OPEN, elementOpening);
    //morphologyEx(*Output, *Output,MORPH_CLOSE, elementClosing);
    Mat erode_img;
    erode( *Output, erode_img, element );
    *Output = *Output - erode_img;

}

void MainWindow::_kmeans(Mat *Mat_Binary, int K)
{



    vector<Point> nonZeroCoordinates;
    //findNonZero(*Mat_Binary, nonZeroCoordinates);

   // cout << nonZeroCoordinates << endl;
    //cout << (*Mat_Binary).at<Vec3b>(956,577)[0] << endl;;
    for(int i=0;i<Mat_Binary->cols;i++)
    {
        for (int j=0;j<Mat_Binary->rows;j++)
        {
            if(Mat_Binary->at<uchar>(i,j) == 255)
                nonZeroCoordinates.push_back(Point(i,j));
        }
    }
    //cout << nonZeroCoordinates << endl;
    int tam = nonZeroCoordinates.size();

    vector<_Point> pontos;

    for (int i=0;i<tam;i++)
    {
        _Point aux(nonZeroCoordinates[i]);
        pontos.push_back(aux);
    }

    __Kmeans__ k_means(K,nonZeroCoordinates.size(),10);

    k_means.run(pontos);

    for(int p = 0; p < K; p++)
    {
        circle(*Mat_Binary, k_means.clusters[p].centro.ponto, 4, Scalar(255,255,255),3);
    }


}

void MainWindow::_kmeans_Worker()
{
    switch (ui->kmeans->currentIndex())
    {
        case 0:
            break;
        case 2:

            std::chrono::time_point<std::chrono::system_clock> inicio, fim;
            inicio = std::chrono::system_clock::now();

            _kmeans(&blue_Mat_binary, 3);

            fim = std::chrono::system_clock::now();

            temp_kmeans += std::chrono::duration_cast<std::chrono::milliseconds>(fim-inicio).count();
            cont++;
            if(cont > 1000)
            {
                ui->time_2->setText(QString("Time Kmeans: %1 ms").arg(temp_kmeans/(float)cont));
                temp_kmeans = 0;
                cont = 0;
            }

            break;
    }

}

void MainWindow::workSapace()
{

    extrair_limiares();

    _kmeans_Worker();

    if(enable)
    {

        switch (ui->comboBox->currentIndex())
        {
            case 0:
                update_frame(Limiar);
                break;
            case 1:
                update_frame(image);
                break;
            case 2:
                update_frame_Binary(yellow_Mat_binary);
                break;
            case 3:
                update_frame_Binary(red_Mat_binary);
                break;
            case 4:
                update_frame_Binary(blue_Mat_binary);
                break;
            case 5:
                update_frame_Binary(orange_Mat_binary);
                break;

        }
    }
    else
        update_frame(image);

    //Paralelo

    std::chrono::time_point<std::chrono::system_clock> inicio, fim;
        inicio = std::chrono::system_clock::now();

         segmentacao(image, Blue, &blue_Mat_binary);
         //segmentacao(image, Yellow, &yellow_Mat_binary);
         //segmentacao(image, Orange, &orange_Mat_binary);
         //segmentacao(image, Red, &red_Mat_binary);

            /*#pragma omp parallel sections
            {
                #pragma omp section
                {
                    segmentacao(image, Blue, &blue_Mat_binary);
                }

                #pragma omp section
                {
                    segmentacao(image, Yellow, &yellow_Mat_binary);
                }

                #pragma omp section
                {
                    segmentacao(image, Orange, &orange_Mat_binary);
                }
                #pragma omp section
                {
                    segmentacao(image, Red, &red_Mat_binary);
                }

            }*/


        fim = std::chrono::system_clock::now();

        temp_paralelo = std::chrono::duration_cast<std::chrono::milliseconds>(fim-inicio).count();
        ui->time->setText(QString("Time: %1 ms").arg(temp_paralelo));
        temp_paralelo = 0;


}
void MainWindow::on_R_min_valueChanged(int value)
{
    rgb[Rmin] = value;
    ui->R_min_2->setValue(value);
}
void MainWindow::on_R_min_2_valueChanged(int arg1)
{
    rgb[Rmin] = arg1;
    ui->R_min->setValue(arg1);
}

void MainWindow::on_R_max_valueChanged(int value)
{
    rgb[Rmax] = value;
    ui->R_max_2->setValue(value);
}

void MainWindow::on_R_max_2_valueChanged(int arg1)
{
    rgb[Rmax] = arg1;
    ui->R_max->setValue(arg1);
}

void MainWindow::on_G_min_valueChanged(int value)
{

    rgb[Gmin] = value;
    ui->G_min_2->setValue(value);
}

void MainWindow::on_G_min_2_valueChanged(int arg1)
{
    rgb[Gmin] = arg1;
    ui->G_min->setValue(arg1);
}

void MainWindow::on_G_max_valueChanged(int value)
{
    rgb[Gmax] = value;
    ui->G_max_2->setValue(value);
}

void MainWindow::on_G_max_2_valueChanged(int arg1)
{
    rgb[Gmax] = arg1;
    ui->G_max->setValue(arg1);
}

void MainWindow::on_B_min_valueChanged(int value)
{
    rgb[Bmin] = value;
    ui->B_min_2->setValue(value);
}

void MainWindow::on_B_min_2_valueChanged(int arg1)
{
    rgb[Bmin] = arg1;
    ui->B_min->setValue(arg1);
}

void MainWindow::on_B_max_valueChanged(int value)
{
    rgb[Bmax] = value;
    ui->B_max_2->setValue(value);
}

void MainWindow::on_B_max_2_valueChanged(int arg1)
{
    rgb[Bmax] = arg1;
    ui->B_max->setValue(arg1);
}

void MainWindow::on_SelectColor_currentIndexChanged(int index)
{
    cout << index << endl;
}

void MainWindow::on_salve_clicked()
{
    switch (ui->SelectColor->currentIndex())
    {
        case 0:
            cout << "Savlo no Azul" << endl;
            Blue[Min] = Scalar(rgb[Bmin],rgb[Gmin],rgb[Rmin]);
            Blue[Max] = Scalar(rgb[Bmax],rgb[Gmax],rgb[Rmax]);
            cout << "Min:" << Blue[Min] << endl;
            cout << "Max:" << Blue[Max] << endl;
            break;
        case 1:
            cout << "Savlo no Laranga" << endl;
            Orange[Min] = Scalar(rgb[Bmin],rgb[Gmin],rgb[Rmin]);
            Orange[Max] = Scalar(rgb[Bmax],rgb[Gmax],rgb[Rmax]);
            cout << "Min:" << Orange[Min] << endl;
            cout << "Max:" << Orange[Max] << endl;
            break;
        case 2:
            cout << "Savlo no Amarelo" << endl;
            Yellow[Min] = Scalar(rgb[Bmin],rgb[Gmin],rgb[Rmin]);
            Yellow[Max] = Scalar(rgb[Bmax],rgb[Gmax],rgb[Rmax]);
            cout << "Min:" << Yellow[Min] << endl;
            cout << "Max:" << Yellow[Max] << endl;
            break;
        case 3:
            cout << "Savlo no Verde" << endl;
            Green[Min] = Scalar(rgb[Bmin],rgb[Gmin],rgb[Rmin]);
            Green[Max] = Scalar(rgb[Bmax],rgb[Gmax],rgb[Rmax]);
            cout << "Min:" << Green[Min] << endl;
            cout << "Max:" << Green[Max] << endl;
            break;
        case 4:
            cout << "Savlo no Vermelho" << endl;
            Red[Min] = Scalar(rgb[Bmin],rgb[Gmin],rgb[Rmin]);
            Red[Max] = Scalar(rgb[Bmax],rgb[Gmax],rgb[Rmax]);
            cout << "Min:" << Red[Min] << endl;
            cout << "Max:" << Red[Max] << endl;
            break;
        default:
        break;
    }


}

void MainWindow::on_enable_limiares_stateChanged(int arg1)
{
    enable = arg1;
}




void MainWindow::on_opencv_clicked()
{
    switch (ui->comboBox->currentIndex())
    {
        case 0:
            imshow("Limiar",Limiar);
            break;
        case 1:
            imshow("original",image);
            break;
        case 2:
            imshow("Yellow",yellow_Mat_binary);
            break;
        case 3:
            imshow("Red",red_Mat_binary);
            break;
        case 4:
            imshow("Blue",blue_Mat_binary);
            break;
        case 5:
            imshow("Orange",orange_Mat_binary);
            break;

    }
}
