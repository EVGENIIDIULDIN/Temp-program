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

	Mat B(A);                        // Копируем        
	imshow("test2", B);

	C = A;                           // Копируем  
	imshow("test3", C);


	waitKey(0);

	// При удалениие исходного удалятся все другие
}

