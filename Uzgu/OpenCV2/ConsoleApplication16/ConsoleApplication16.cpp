#include "pch.h"
#include <iostream>
#include <opencv2/opencv.hpp>
//#include <opencv2\core.hpp>
//#include <opencv2\imgcodecs.hpp>
//#include <opencv2\highgui.hpp>

using namespace std;
using namespace cv;



int main(int arcg, char* argv[])
{


	string path = ("C:\\Users\\Евгений\\Desktop\\OpenTest\\tig.jpg");

	Mat image = imread(path, IMREAD_COLOR);
	
	Mat image_new;// Создаём контейнер
	
	namedWindow("new", WINDOW_AUTOSIZE);// Создаём окно
   
	imshow("new", image);// Выводим на экран

	cvtColor(image, image_new, COLOR_BGR2GRAY);//#include <opencv2/opencv.hpp> Конвертируем изображение
	
	imshow("new1", image_new);

	waitKey(0);


	// Остальные можно закоментить библиотеки 
	//#include <opencv2\core.hpp>
    //#include <opencv2\imgcodecs.hpp>
    //#include <opencv2\highgui.hpp>

}

