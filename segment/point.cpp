#include "point.h"
#include <iostream>

Point::Point(const Rational &x, const Rational &y) : x(x), y(y) {}

Rational Point::getX() const {
    return x;
}

Rational Point::getY() const {
    return y;
}

void Point::setX(const Rational &r) {
    x = r;
}

void Point::setY(const Rational &r) {
    y = r;
}

std::ostream &operator<<(std::ostream &output, const Point &point) {
    output << "(" << point.x << ", " << point.y << ")";
    return output;
}