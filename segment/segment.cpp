#include "segment.h"
#include <iostream>
#include <cmath>

Segment::Segment(const Point &A, const Point &B) : A(A), B(B) {}

Point Segment::getA() const {
    return A;
}

Point Segment::getB() const {
    return B;
}

void Segment::setA(const Point &p) {
    A = p;
}

void Segment::setB(const Point &p) {
    B = p;
}

double Segment::dimension() const {
    Rational dx = A.getX() - B.getX();
    Rational dy = A.getY() - B.getY();
    return sqrt(static_cast<double>(dx * dx + dy * dy));
}