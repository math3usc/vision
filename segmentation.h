#ifndef SEGMENTATION_H
#define SEGMENTATION_H

#include <iostream>
#include <opencv2/opencv.hpp>
#include <algorithm>
#include <vector>

using namespace cv;
using namespace std;

class Segmentation
{

private:
    Scalar rgbmin;
    Scalar rgbmax;
    Mat segmentacao;
    Mat Mascara[2];
    vector< vector<Point> > contours;
    vector<Vec4i> hierarchy;
public:
    /*
     * Método: Segmentation(Scalar min,Scalar max,Mat *Mask);
     *
     * Descrição: Instancia um objeto da classe Segmentation
     *            atribuindo características como os intervalos
     *            de limiares e as máscaras para operações
     *            morfológicas de abertura e fechamento
     *
     * Parâmetros:
     *            1)  min  -  Limiar contendo os valores mínimos de Red,Green,Blue
     *
     *            2)  max  -  Limiar contendo os valores máximos de Red,Green,Blue
     *
     *            3)  *Mask - Ponteiro para uma matriz do tipo Mat que representa
     *                        a forma da máscara usada para as operações de
     *                         abertura e fechamento.
     *
     * Retorno: Nenhum
     */
    Segmentation(Scalar min,Scalar max,Mat *Mask);

    /*
     * Método:  Segmentation_Result(Mat *frame);
     *
     * Descrição: Responsável pelo retorno da matriz binária resultante
     *            da segmentação, feita a partir dos limiares definidos,
     *            da imagem fornecida.
     *
     * Parâmetros:
     *            1)  min - Limiar contendo os valores mínimos de Red,Green,Blue
     *
     *            2)  max - Limiar contendo os valores máximo de Red,Green,Blue
     *
     *            3)  *Mask - Ponteiro para uma matriz do tipo Mat que representa
     *                        a forma da máscara usada para as operações de
     *                        abertura e fechamento.
     *
     * Retorno:
     *        Nenhum
     */
    Mat* Segmentation_Result(Mat *frame);





};

#endif // SEGMENTATION_H
