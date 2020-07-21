#include "pch.h"
#include <iostream>
#include <opencv2/opencv.hpp>
//#include <opencv2\core.hpp>
//#include <opencv2\imgcodecs.hpp>
//#include <opencv2\highgui.hpp>

using namespace std;
using namespace cv;



int main()
{
	double alpha = 0.5; double beta; double input;
	Mat src1, src2, dst;
	cout << " Линейное преобразование " << endl;
	cout << "-----------------------" << endl;
	cout << "* Введите альфу [0.0-1.0]: ";
	cin >> input;
	// Используем альфу
	if (input >= 0 && input <= 1)
	{
		alpha = input;
	}
	src1 = imread("C:\\Users\\Евгений\\Desktop\\OpenTest\\water.jpg");
	src2 = imread("C:\\Users\\Евгений\\Desktop\\OpenTest\\windows.jpg");
	if (src1.empty()) { cout << "Error loading src1" << endl; return -1; }
	if (src2.empty()) { cout << "Error loading src2" << endl; return -1; }
	beta = (1.0 - alpha);
	addWeighted(src1, alpha, src2, beta, 1.0, dst);
	imshow("Linear Blend", dst);
	waitKey(0);
	return 0;




}

