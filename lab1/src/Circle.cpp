#include "Circle.h"

Circle::Circle(const double& radius, const double& x, const double& y) : r(radius), center(Point(x, y)) {}

Circle::Circle(const Circle& other) : r(other.r), center(Point(other.center.x, other.center.y)) {}

RelativePostion circlesLocation(const Circle& c1, const Circle& c2) {
    double dist = distance(c1.getCenter(), c2.getCenter());
    double r1 = c1.getRadius();
    double r2 = c2.getRadius();
    
    if(dist == 0) return RelativePostion::concentric;
    if(dist == fabs(r1 - r2)) return RelativePostion::touchingInternally;
    if(dist == r1 + r2) return RelativePostion::touchingExternally;
    if(dist < fabs(r1 - r2)) return RelativePostion::internallyDisconnected;
    if(dist > r1 + r2) return RelativePostion::externallyDisconnected;
    
    return RelativePostion::intersecting;

}