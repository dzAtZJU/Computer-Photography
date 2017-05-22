//
// Created by zz on 22/05/2017.
//

#ifndef CYLINDRICALPANORAMIC_CYLINDRICALMAPPEDIMAGE_H
#define CYLINDRICALPANORAMIC_CYLINDRICALMAPPEDIMAGE_H

#include <opencv2/opencv.hpp>
#include "CylinDricalMap.h"

class CylinDricalMappedImage {
public:
    CylinDricalMappedImage(const cv::Mat &image, double f, double r = 1);

    int x_Max();
    int x_Min();
    int y_Max();
    int y_Min();
    int intensityAt(int x_, int y_);
private:
    cv::Mat image;
    double f;
    double r;
    int imageHalfWidth;
    int imageHalfHeight;
    CylinDricalMap cylinDricalMap;
    MyPoint transformBack(MyPoint& xy);
};


#endif //CYLINDRICALPANORAMIC_CYLINDRICALMAPPEDIMAGE_H
