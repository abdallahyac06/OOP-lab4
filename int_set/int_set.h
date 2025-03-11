#ifndef INT_SET_H
#define INT_SET_H

#include <iostream>

const int MAX_SIZE = 101;

class IntegerSet{
    private:
        bool set[MAX_SIZE] = {};

    public:
        IntegerSet();
        IntegerSet(const IntegerSet &);

        void operator=(const IntegerSet &);
        void operator+=(int);
        void operator-=(int);
        IntegerSet operator|(const IntegerSet &) const;
        IntegerSet operator&(const IntegerSet &) const;
        bool operator==(const IntegerSet &) const;
        bool operator!=(const IntegerSet &other) const {
            return !(*this == other);
        }

        void inputSet(const int*, int);

    friend std::istream &operator>>(std::istream &, IntegerSet &);
    friend std::ostream &operator<<(std::ostream &, const IntegerSet &);
};

#endif