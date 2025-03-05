#include "segment.h"
#include "rational.h"
#include <iostream>

int main() {
    Rational p (5, 2), q(6, 2), r(1, 1);

    Point a(p, q);

    Point b;
    b.setX(r);
    b.setY(r);

    std::cout << "A " << a << std::endl << "B " << b << std::endl;

    Segment ab(a, b);
    std::cout << "AB = " << ab.dimension() << std::endl;
    return 0;
    
}