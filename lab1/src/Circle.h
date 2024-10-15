#pragma once
#include <iostream>
#define USE_MATH_DEFINES
#include <math.h>
#include "Point.h"

class Circle {
private:
    double r;
    Point center;

public:
    // Construtors
    Circle(const double& radius, const double& x, const double& y);

    Circle(const Circle& other);

    // Accessors
    const double getRadius() const {
        return r;
    }

    const void setRadius(const double& value) {
        r = value;
    }

    const Point getCenter() const {
        return center;
    }

    const void setCenter(const Point& point) {
        center = point;
    }

    const void setCenter(const double x, const double y) {
        center = Point(x, y);
    }

    // Methods
    const inline double area() const {
        return M_PI * r * r;
    }

    const inline double perimeter() const {
        return M_PI * 2 * r;
    }

    const inline void print() const {
        std::cout << "Center:\t (" << center.x << ", " << center.y << ")\n";
        std::cout << "Radius:\t" << r << "\n";
    }
};

enum class RelativePostion {
    touchingExternally,
    touchingInternally,
    intersecting,
    internallyDisconnected,
    externallyDisconnected,
    concentric
};


RelativePostion circlesLocation(const Circle& c1, const Circle& c2);