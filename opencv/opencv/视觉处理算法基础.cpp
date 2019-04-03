#include "视觉处理算法基础.h"

#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;

/*
1、以Lena为原始图像，通过OpenCV实现平均滤波，高斯滤波及中值滤波，比较滤波结果
2、以Lena为原始图像，通过OpenCV实现数学形态学先开后闭运算，与作业1得到结果进行比较
*/

void image_filtration()
{
	const char *fn = "C:\\Users\\gengy\\Desktop\\lena.jpg";
	Mat image = imread(fn);
	imshow("hello, world!", image);

	Mat blur_image, gaussianblur_image, medianblur_image;
	blur(image, blur_image, Size(3, 3));
	imshow("均值滤波", blur_image);

	GaussianBlur(image, gaussianblur_image, Size(3, 3), 0, 0);
	imshow("高斯滤波", gaussianblur_image);

	medianBlur(image, medianblur_image, 3);
	imshow("中值滤波", medianblur_image);
	waitKey(0);
}

void math_morphology()
{
	const char *fn = "C:\\Users\\gengy\\Desktop\\lena.jpg";
	Mat image = imread(fn);
	imshow("hello, world!", image);
}
