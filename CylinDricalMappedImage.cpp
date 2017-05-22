//
// Created by zz on 22/05/2017.
//

#include "CylinDricalMappedImage.h"

CylinDricalMappedImage::CylinDricalMappedImage(const cv::Mat &image, double f,
                                               double r) : image(image), f(f),
                                                           r(r), cylinDricalMap(f, r)
{
    this->imageHalfWidth = image.cols/2;
    this->imageHalfHeight = image.rows/2;
}

int CylinDricalMappedImage::x_Max() {
    int originalXMax = imageHalfWidth;
    return cylinDricalMap.toCylinDrical(originalXMax, 0).x;
}

int CylinDricalMappedImage::x_Min() {
    return -x_Max();
}

int CylinDricalMappedImage::y_Max() {
    int originalYMax = imageHalfHeight;
    return cylinDricalMap.toCylinDrical(originalYMax, 0).y;
}

int CylinDricalMappedImage::y_Min() {
    return -y_Max();
}

int CylinDricalMappedImage::intensityAt(int x_, int y_) {
    assert(x_<= x_Max() && x_>= x_Min() && y_<= y_Max() && y_>= y_Min());
    auto xy = cylinDricalMap.fromCylinDrical(x_, y_);
    auto untransformedXY = transformBack(xy);
    std::cout<< "Coord of Mat not clear"<<std::endl;
    return image.at<int>(untransformedXY.y, untransformedXY.x);
}

MyPoint CylinDricalMappedImage::transformBack(MyPoint& xy) {
    return MyPoint(xy.x+imageHalfWidth, xy.y+imageHalfHeight);
}
