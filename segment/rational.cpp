#include "rational.h"
#include <iostream>
#include <cmath>

int gcd(int a, int b) {
    int r = a % b;
    while (r) {
        a = b;
        b = r;
        r = a % b;
    }
    return abs(b);
}

Rational::Rational(int num, int denom) {
    setRational(num, denom);
}

void Rational::reduce() {
    int n = gcd(numerator, denominator);
    numerator /= n;
    denominator /= n;
}

void Rational::setRational(int num, int denom) {
    if (denom == 0) {
        std::cout << "Zero Division Error. Automatically set to 0/1." << std::endl;
        numerator = 0;
        denominator = 1;
    } else {
        numerator = (num * denom >= 0)? abs(num): -abs(num);
        denominator = abs(denom);
        reduce();
    }
}

int Rational::getNumerator() const {
    return numerator;
}

int Rational::getDenominator() const {
    return denominator;
}

Rational Rational::operator+(const Rational &other) const {
    return Rational(numerator * other.denominator + denominator * other.numerator,
                denominator * other.denominator);
}

Rational Rational::operator-(const Rational &other) const {
    return Rational(numerator * other.denominator - denominator * other.numerator,
                denominator * other.denominator);
}

Rational Rational::operator*(const Rational &other) const {
    return Rational(numerator * other.numerator,
                denominator * other.denominator);
}

Rational Rational::operator/(const Rational &other) const {
    return Rational(numerator * other.denominator,
                denominator * other.numerator);
}

Rational::operator double() const {
    return static_cast<double>(numerator) / denominator;
}

std::ostream &operator<<(std::ostream &output, const Rational &rational) {
    output << rational.numerator << "/" << rational.denominator;
    return output;
}
