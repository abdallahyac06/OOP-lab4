#ifndef SEGMENT_H
#define SEGMENT_H

#include "point.h"

class Segment{
    private:
        Point A;
        Point B;

    public:
        Segment(const Point& = Point(), const Point& = Point());

        Point getA() const;
        Point getB() const;

        void setA(const Point&);
        void setB(const Point&);

        double dimension() const;
};

#endif