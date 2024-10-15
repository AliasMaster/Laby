#pragma once
#include <math.h>

class Point {
public:
    double x;
    double y;

    Point(const double& x, const double& y) : x(x), y(y) {}
};

double distance(const Point& p1, const Point& p2);