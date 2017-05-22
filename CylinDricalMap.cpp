//
// Created by zz on 22/05/2017.
//

#include "CylinDricalMap.h"
#include <math.h>

MyPoint CylinDricalMap::toCylinDrical(int x, int y) {
    double x_ = this->r * atan2(x, this->f);
    double y_ = this->r * y/ sqrt(x*x + f*f);
    return MyPoint(x_, y_);
}

MyPoint CylinDricalMap::fromCylinDrical(int x_, int y_) {
    double x = this->f * tan(x_ / this->r);
    double y = y_ / this->r * sqrt(x*x + this->f*this->f);
    return MyPoint(x, y);
}

CylinDricalMap::CylinDricalMap(double f, double r) : f(f), r(r) {}

MyPoint::MyPoint(double x, double y) : x(x), y(y) {}
