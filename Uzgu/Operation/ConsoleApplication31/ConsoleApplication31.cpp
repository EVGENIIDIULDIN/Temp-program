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
	/*char x = 300; char y = 307;

	Mat img = imread("C:\\Users\\Евгений\\Desktop\\OpenTest\\tig.jpg", IMREAD_COLOR);
	//Mat img1 = imread("C:\\Users\\Евгений\\Desktop\\OpenTest\\tig.jpg", IMREAD_GRAYSCALE);
	imshow("new", img);
	Vec3b intensity = img.at<Vec3b>(y, x);
	uchar blue = intensity.val[0];
	uchar green = intensity.val[1];
	uchar red = intensity.val[2];
	
	/*cout << int(blue);
	blue = 250;
	cout << int(blue);
	cout << intensity;
	*/

	// Вторая часть
	/*int x = 1006;
	int y = 78;

	Mat img1 = imread("C:\\Users\\Евгений\\Desktop\\OpenTest\\tig.jpg", IMREAD_GRAYSCALE);

	Scalar intensity = img1.at<uchar>(Point(x, y));
	cout << intensity;
	*/


	// 3 часть

	Mat news = (Mat_<double>(2, 4) << 1, 2, 3,4,5,6,7,8);
	Mat pointsMat = Mat(news).reshape(1);
	cout << news<<endl;
	cout << pointsMat;

	waitKey(0);
}
