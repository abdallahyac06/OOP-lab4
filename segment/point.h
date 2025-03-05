#ifndef POINT_H
#define POINT_H

#include "rational.h"
#include <iostream>

class Point {
    private:
        Rational x;
        Rational y;

    public:
        Point(const Rational& = Rational(), const Rational& = Rational());

        Rational getX() const;
        Rational getY() const;

        void setX(const Rational&);
        void setY(const Rational&);

    friend std::ostream &operator<<(std::ostream &, const Point &);
};

#endif