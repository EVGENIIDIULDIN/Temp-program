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
	Mat src = imread("C:\\Users\\Евгений\\Desktop\\OpenTest\\tig.jpg", IMREAD_COLOR);
	Mat dst1;
	imshow("new0", src);

	Mat kernel = (Mat_<char>(3, 3) << 0, -1, 0,
		-1, 4, -1,
		0, -1, 0);

	filter2D(src, dst1, src.depth(), kernel);

	imshow("new", dst1);
	waitKey(0);


}


