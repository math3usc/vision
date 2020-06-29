#ifndef BALL_H_
#define BALL_H_

#include <opencv2/opencv.hpp>
#include <fstream>
using namespace std;
using namespace cv;

class Ball
{
private:

public:
    int x; // Coordenada x da posição da bola
    int y; // Coordenada y da posição da bola

    /*
     * Método: Ball()
     * Acesso: public
     * Descrição: Método responsável por instanciar a classe Ball
     * Pârametro:
     *         Nenhum
    */
    Ball();

    /*
     * Método: Refresh_Position(Point bola);
     * Acesso: public
     * Descrição:   Atualiza a coordenada da posição da bola que é
     *              armazenada pela classe Ball.
     * Parâmetro:
     *           1)  bola -> Ponto(x,y) da coordenada da bola.
     *
     * Retorno:
     *       Nenhum.
     *
    */
    void Refresh_Position(Point bola);

    /*
     * Método: Refresh_Position(int xa, int ya);
     * Descrição: Atualiza a coordenada da posição da bola que é
     *            armazenada pela classe Ball.
     * Parâmetro:
     *           1)  xa -> Valor inteiro referente à coordenada x
     *                     da posição da bola.
     *
     *           2)  ya -> Valor inteiro referente à coordenada y
     *                     da posição da bola.
     * Retorno:
     *       Nenhum.
    */
    void Refresh_Position(int xa,int ya);



    ~Ball();
};

#endif // BALL

