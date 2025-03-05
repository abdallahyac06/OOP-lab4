#ifndef rational_H
#define rational_H

#include <iostream>

int gcd(int, int);

class Rational {
    private:
        int numerator;
        int denominator;
        void reduce();
    public:
        Rational(int = 0, int = 1);

        void setRational(int, int);

        int getNumerator() const;
        int getDenominator() const;

        Rational operator+(const Rational &) const;
        Rational operator-(const Rational &) const;
        Rational operator*(const Rational &) const;
        Rational operator/(const Rational &) const;
        operator double() const;

    friend std::ostream &operator<<(std::ostream &, const Rational &);
};

#endif