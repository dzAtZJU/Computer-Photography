//
// Created by zz on 22/05/2017.
//

#ifndef CYLINDRICALPANORAMIC_CYLINDRICALMAP_H
#define CYLINDRICALPANORAMIC_CYLINDRICALMAP_H

struct MyPoint {
    MyPoint(double x, double y);
    double x;
    double y;
};

class CylinDricalMap {
public:
    CylinDricalMap(double f, double r = 1);

    MyPoint toCylinDrical(int x, int y);
    MyPoint fromCylinDrical(int x_, int y_);
private:
    double f;
    double r;
};


#endif //CYLINDRICALPANORAMIC_CYLINDRICALMAP_H
