#include<iostream>
#include "opencv2/opencv.hpp"

#include "������Ӿ�����.h"
#include "���ֳ���ϵͳ.h"
#include "�Ӿ������㷨����.h"

void main()
{
#if !OPENCV
	hello_world();

	gaussianblur();
#endif

#if DIGITAL_IMAGE
	digital_image();
#endif

#if	!IMAGE_FILTRATION_DENOISE
	image_filtration();
#endif
}

