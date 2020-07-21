#include "pch.h"
#include <iostream>
#include <opencv2/opencv.hpp>
//#include <opencv2\core.hpp>
//#include <opencv2\imgcodecs.hpp>
//#include <opencv2\highgui.hpp>

using namespace std;
using namespace cv;



int main(int argc, char* argv[])  // Передать параметры если нужны
{
	// Откомпилировать
	string path = ("C:\\Users\\Евгений\\Desktop\\OpenTest\\tig.jpg");
	
	if (argc > 1) // Если передали параметр через консоль
	{
		path = argv[1];
	}

	if (path.empty())     // Если нет файла то предупреждение               
	{
		cout << "Файл не найден" << std::endl;
		return -1;
	}

	Mat image = imread(path, IMREAD_COLOR);
	Mat image_new;// Создаём контейнер
	
	namedWindow("new", WINDOW_AUTOSIZE);// Создаём окно
	imshow("new", image);// Выводим на экран

	cvtColor(image, image_new, COLOR_BGR2GRAY);//#include <opencv2/opencv.hpp> Конвертируем изображение
	imshow("new1", image_new);

	imwrite("C:\\Users\\Евгений\\Desktop\\Testend\\tigs.jpg", image_new);

	waitKey(0);


	// Остальные можно закоментить библиотеки 
	//#include <opencv2\core.hpp>
	//#include <opencv2\imgcodecs.hpp>
	//#include <opencv2\highgui.hpp>

}

