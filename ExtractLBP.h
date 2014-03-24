#ifndef _EXTRACT_LBP_
#define _EXTRACT_LBP_

#include <stdio.h>
#include <stdlib.h>
#include <opencv2/opencv.hpp>
#include <cv.h> 
#include <highgui.h>
#include <cxcore.h>
 
using namespace std;
using namespace cv;
 
uchar g_uniform_lbp[58] = {0, 1, 2, 3, 4, 6, 7, 8, 12, 14, 15, 16, 24, 28, 30, 31, 32, 48, \
                          56, 60, 62, 63, 64, 96, 112, 120, 124, 126, 127, 128, 129, 131, \
                          135, 143, 159, 191, 192, 193, 195, 199, 207, 223, 224, 225, 227,\
                          231, 239, 240, 241, 243, 247, 248, 249, 251, 252, 253, 254, 255};
//uchar g_not_uniform_lbp[] = {5,   9,  10,  11,  13,  17,  18,  19,  20,  21,  22,  23,  25,\
                            26,  27,  29,  33,  34,  35,  36,  37,  38,  39,  40,  41,  42,\
                            43,  44,  45,  46,  47,  49,  50,  51,  52,  53,  54,  55,  57,\
                            58,  59,  61,  65,  66,  67,  68,  69,  70,  71,  72,  73,  74,\
                            75,  76,  77,  78,  79,  80,  81,  82,  83,  84,  85,  86,  87,\
                            88,  89,  90,  91,  92,  93,  94,  95,  97,  98,  99, 100, 101,\
                           102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 113, 114, 115,\
                           116, 117, 118, 119, 121, 122, 123, 125, 130, 132, 133, 134, 136,\
                           137, 138, 139, 140, 141, 142, 144, 145, 146, 147, 148, 149, 150,\
                           151, 152, 153, 154, 155, 156, 157, 158, 160, 161, 162, 163, 164,\
                           165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177,\
                           178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190,\
                           194, 196, 197, 198, 200, 201, 202, 203, 204, 205, 206, 208, 209,\
                           210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222,\
                           226, 228, 229, 230, 232, 233, 234, 235, 236, 237, 238, 242, 244,\
                           245, 246, 250};

void LBP (const IplImage *src, IplImage *dst);
void PatchUniformLBP(const IplImage* src, float* lbp_uniform);
void MultiScaleLBP(const IplImage* src, float* lbp, int scale, int cell_num_steps);

#endif