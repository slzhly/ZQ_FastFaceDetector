#ifndef _ZQ_FAST_FACE_DETECTOR_H_
#define _ZQ_FAST_FACE_DETECTOR_H_
#include <vector>

struct face_box
{
	float score;
	int row1;
	int col1;
	int row2;
	int col2;
	float ppoint[10];
};

bool init(int thread_num, const char* username = "test2000times");

bool detect(std::vector<face_box>& result, 
	const unsigned char* bgr_img, int width, int height, int width_step, 
	int min_face_size = 60, bool do_landmark = false, bool refine_landmark = false);

#endif
