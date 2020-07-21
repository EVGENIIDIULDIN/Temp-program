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

	// Создаём цветовую гамму 

	int divideWith = 30; // По этому параметру ужимаем
	stringstream s;
	/*s << argv[2];
	s >> divideWith;
	if (!s || !divideWith)
	{
		cout << "Invalid number entered for dividing. " << endl;
		return -1;
	}*/

	// Проходим по всем значениям
	uchar table[256];
	for (int i = 0; i < 256; ++i)
		table[i] = (uchar)(divideWith * (i / divideWith));
	
	// Создайм проходную таблицу
	Mat lookUpTable(1, 256, CV_8U);
	uchar* p = lookUpTable.ptr();
	for (int i = 0; i < 256; ++i)
	{
		if (p[i] > 64)
		{
			p[i] = table[i];
	    }
		
	}
		

	// Работа с функцией

	Mat image = imread("C:\\Users\\Евгений\\Desktop\\OpenTest\\tig.jpg", IMREAD_COLOR);
	imshow("new", image);
	Mat image_new;

	LUT(image, lookUpTable, image_new);
	imshow("new2", image_new);


	waitKey(0);


}

