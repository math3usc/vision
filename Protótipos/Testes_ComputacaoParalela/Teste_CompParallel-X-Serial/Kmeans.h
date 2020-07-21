#ifndef KMEANS_H
#define KMEANS_H

#include <iostream>
#include <vector>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
#include "omp.h"
#include "mainwindow.h"

//OpenCV
#include <opencv4/opencv2/opencv.hpp>
#include <opencv4/opencv2/core.hpp>
#include <opencv4/opencv2/calib3d/calib3d.hpp>
#include <opencv4/opencv2/highgui/highgui.hpp>
#include <opencv4/opencv2/imgproc/imgproc.hpp>

using namespace std;
using namespace cv;

class _Point{

public:
    int id;
    Point ponto;

    _Point()
    {
        this->id = -1;
    }

    _Point( Point _ponto)
    {
        this->ponto = _ponto;
        this->id = -1;
    }

};

class Cluster
{
private:

    int id_cluster;
    _Point centro;
    vector<_Point> pontos;

    friend class MainWindow;
    friend class __Kmeans__;

public:

    Cluster(int id_cluster, _Point _centro)
    {
        this->id_cluster = id_cluster;
        this->centro = _centro;
        pontos.push_back(_centro);
    }

    void add_ponto(_Point point)
    {
        pontos.push_back(point);
    }
    void remove_ponto(int i)
    {
        if(i < (int)pontos.size())
            pontos.erase(pontos.begin() + i);
    }
    void update_centro(Point _centro)
    {
        _Point p(_centro);
        this->centro = p;
    }
    int getID() const
    {
        return id_cluster;
    }
    Point getCentro() const
    {
        return centro.ponto;
    }
    Point getPonto(int i) const
    {
        return pontos[i].ponto;
    }


};

class __Kmeans__
{
private:

    int K; // number of clusters
    int total_points, max_iterations;
    vector<Cluster> clusters;

    int getIDNearestCenter(Point ponto)
    {
        double sum = 0.0, min_dist;
        int id = 0;

        sum = pow(clusters[0].getCentro().x - ponto.x,2.0)
                    + pow(clusters[0].getCentro().y - ponto.y,2.0);

        min_dist = sqrt(sum);

        for(int i = 1; i < K; i++)
        {
            double dist;
            sum = 0.0;

            sum = pow(clusters[i].getCentro().x - ponto.x,2.0)
                        + pow(clusters[i].getCentro().y - ponto.y,2.0);

            dist = sqrt(sum);

            if(dist < min_dist)
            {
                min_dist = dist;
                id = i;
            }
        }

        return id;
    }

    friend class MainWindow ;


public:
    __Kmeans__(int K, int total_points, int max_iterations)
    {
        this->K = K;
        this->total_points = total_points;
        this->max_iterations = max_iterations;
    }

    void run(vector<_Point>& pontos/*, int *time_rotine*/)
    {
        if(K > total_points)
            return;

        vector<int> prohibited_indexes;

        // choose K distinct values for the centers of the clusters
        for(int i = 0; i < K; i++)
        {
            while(true)
            {
                int index_point = rand() % (total_points/(i+1));

                if(find(prohibited_indexes.begin(), prohibited_indexes.end(),
                        index_point) == prohibited_indexes.end())
                {
                    prohibited_indexes.push_back(index_point);
                    pontos[index_point].id = i;
                    Cluster cluster(i, pontos[index_point]);
                    clusters.push_back(cluster);
                    break;
                }
            }
        }

       int iter = 1;

        while(true)
        {
            bool done = true;
            //associa cada ponto ao centro mais próximo
            // associates each point to the nearest center
            for(int i = 0; i < total_points; i++)
            {

                int id_old_cluster = pontos[i].id;
                int id_nearest_center = getIDNearestCenter(pontos[i].ponto);
               // cout << id_nearest_center << endl;

                if(id_old_cluster != id_nearest_center)
                {
                    if(id_old_cluster != -1)
                        clusters[id_old_cluster].remove_ponto(i);


                    pontos[i].id = id_nearest_center;
                    clusters[id_nearest_center].add_ponto(pontos[i]);
                    done = false;


                }


            }

            // recalculating the center of each cluster
            for(int i = 0; i < K; i++)
            {
                int tam = (int)clusters[i].pontos.size();
                double sum = 0.0;
                double _sum = 0.0;

                if(tam > 0)
                {
                    for(int p = 0; p < tam;p++)
                    {
                        sum += clusters[i].getPonto(p).x;
                        _sum += clusters[i].getPonto(p).y;
                    }

                    clusters[i].update_centro(Point(sum/tam,_sum/tam));
                }
            }

            if(done == true || iter >= max_iterations)
            {
                cout << "Break in iteration " << iter << "\n\n";
                break;
            }

            iter++;
        }

      }




};


#endif // KMEANS_H
