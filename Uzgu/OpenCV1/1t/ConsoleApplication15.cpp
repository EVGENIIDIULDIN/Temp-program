#include "pch.h"
#include <iostream>
#include <opencv2\core.hpp>
#include <opencv2\imgcodecs.hpp>
#include <opencv2\highgui.hpp>

using namespace std;
using namespace cv;



int main(int arcg, char* argv[])
{


	string path = ("C:\\Users\\Евгений\\Desktop\\OpenTest\\tig.jpg");

	Mat image = imread(path, IMREAD_COLOR);

	namedWindow("new", WINDOW_AUTOSIZE);
	
	imshow("new", image);
	
	waitKey(0);

}

