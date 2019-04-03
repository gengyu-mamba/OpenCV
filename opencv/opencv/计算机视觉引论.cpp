#include "������Ӿ�����.h"

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
1��ͼ��ı��С
2��ͼ��ƽ��
3��ͼ����(yu)ֵ��
*/

void gaussianblur()
{
	const char *fn = "C:\\Users\\gengy\\Desktop\\lena.jpg";
	Mat image = imread(fn);

	Mat imageGauss, image1, image2, gray, gray1, hsv, hsvChannels[3];

	//��ͼ������˹ƽ��������ʾ
	GaussianBlur(image, imageGauss, Size(5, 5), 0);
	imshow("source image", image);
	imshow("Gaussian filtered image", imageGauss);
	waitKey();

	//��ͼ��ʹ��resize��pyrDown��Сһ����һ�룬��ʾ��ͼ��
	resize(image, image1, Size(image.cols / 2, image.rows / 2));
	pyrDown(image1, image2);
	imshow("half size", image1);
	imshow("quarter size", image2);
	waitKey();

	//��ɫת�ҶȲ�����ֵ������ʾ
	cvtColor(image, gray, COLOR_BGR2GRAY);
	threshold(gray, gray1, 120, 0xff, THRESH_BINARY);
	imshow("gray", gray);
	imshow("threshold image", gray1);
	waitKey();
}

