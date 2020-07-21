#include "pch.h"
#include <iostream>
#include <opencv2/opencv.hpp>
//#include <opencv2\core.hpp>
//#include <opencv2\imgcodecs.hpp>
//#include <opencv2\highgui.hpp>

using namespace std;
using namespace cv;


int main(int argc, char* argv[])
{
    
    string path = ("C:\\Users\\Евгений\\Desktop\\OpenTest\\tig.jpg");

	Mat A, C;                          // Можно сделать через консоль ввод ещё


	A = imread(path, IMREAD_COLOR);
	imshow("test1", A);

	/*cout << A.size().width<<endl;
	cout << A.size().height<<endl; // Выводит параметры изображения
	cout << A.channels();*/
	int  width = A.size().width;
	int  heigh = A.size().height;
	cout << width;
	float n = 0.4;
	Mat D(A, Rect((width * n), 1, 500, 600)); // Задаём границы для изображения
	imshow("test2", D);

	/*Mat E = A(Range::all(), Range(1, 100));
	imshow("test3", E);*/



	// Методы для клонирования матриц , при изменении исходной эти не поменяются
	Mat F = A.clone(); 
	Mat G;
	A.copyTo(G);

	waitKey(0);

	// При удалениие исходного удалятся все другие
}

