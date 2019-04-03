#include "�Ӿ������㷨����.h"

#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;

/*
1����LenaΪԭʼͼ��ͨ��OpenCVʵ��ƽ���˲�����˹�˲�����ֵ�˲����Ƚ��˲����
2����LenaΪԭʼͼ��ͨ��OpenCVʵ����ѧ��̬ѧ�ȿ�������㣬����ҵ1�õ�������бȽ�
*/

void image_filtration()
{
	const char *fn = "C:\\Users\\gengy\\Desktop\\lena.jpg";
	Mat image = imread(fn);
	imshow("hello, world!", image);

	Mat blur_image, gaussianblur_image, medianblur_image;
	blur(image, blur_image, Size(3, 3));
	imshow("��ֵ�˲�", blur_image);

	GaussianBlur(image, gaussianblur_image, Size(3, 3), 0, 0);
	imshow("��˹�˲�", gaussianblur_image);

	medianBlur(image, medianblur_image, 3);
	imshow("��ֵ�˲�", medianblur_image);
	waitKey(0);
}

void math_morphology()
{
	const char *fn = "C:\\Users\\gengy\\Desktop\\lena.jpg";
	Mat image = imread(fn);
	imshow("hello, world!", image);
}
