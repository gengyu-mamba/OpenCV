#include "计算机视觉引论.h"

#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;

void hello_world()
{
	const char *fn = "C:\\Users\\gengy\\Desktop\\lena.jpg";
	Mat image = imread(fn);
	imshow("hello, world!", image);
	waitKey(0);
}

/*
1、图像改变大小
2、图像平滑
3、图像阈(yu)值化
*/

void gaussianblur()
{
	const char *fn = "C:\\Users\\gengy\\Desktop\\lena.jpg";
	Mat image = imread(fn);

	Mat imageGauss, image1, image2, gray, gray1, hsv, hsvChannels[3];

	//对图像做高斯平滑处理并显示
	GaussianBlur(image, imageGauss, Size(5, 5), 0);
	imshow("source image", image);
	imshow("Gaussian filtered image", imageGauss);
	waitKey();

	//对图像使用resize和pyrDown缩小一半再一半，显示各图像
	resize(image, image1, Size(image.cols / 2, image.rows / 2));
	pyrDown(image1, image2);
	imshow("half size", image1);
	imshow("quarter size", image2);
	waitKey();

	//彩色转灰度并作阈值化，显示
	cvtColor(image, gray, COLOR_BGR2GRAY);
	threshold(gray, gray1, 120, 0xff, THRESH_BINARY);
	imshow("gray", gray);
	imshow("threshold image", gray1);
	waitKey();
}

