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
  
	Mat image = imread("C:\\Users\\Евгений\\Desktop\\OpenTest\\tig.jpg");
	Mat image_new;

	imshow("new0", image);
	int alpha = 3;
	int beta = 5;
	image.convertTo(image_new, -1, alpha, beta);
	
	imshow("new1", image_new);
	waitKey(0);




}

