#include<iostream>
#include "opencv2/opencv.hpp"

#include "计算机视觉引论.h"
#include "数字成像系统.h"
#include "视觉处理算法基础.h"

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

