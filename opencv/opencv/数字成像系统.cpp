#include "数字成像系统.h"

#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

void digital_image()
{
	const char *fn = "C:\\Users\\gengy\\Desktop\\lena.jpg";
	Mat image1 = imread(fn);

	Mat image, gray, hsv, hsvChannels[3];
	pyrDown(image1, image);
	cvtColor(image, gray, COLOR_BGR2GRAY);

	imshow("source image", image);
	imshow("gray", gray);
	waitKey();

	cvtColor(image, hsv, COLOR_BGR2HSV);
	split(hsv, hsvChannels);
	
	imshow("Hue", hsvChannels[0]);
	imshow("Saturation", hsvChannels[1]);
	imshow("Value", hsvChannels[2]);

	for (int i = 0; i < 3; i++)
	{
		uchar *p = image.ptr<uchar>(i);

		for (int j = 0; j < 3; j++)
		{
			cout << (int)p[j * 3] << ',' << (int)p[j * 3 + 1] << "," << (int)p[j * 3 + 2] << ";";
		}
		cout << endl;
	}
	waitKey();
}