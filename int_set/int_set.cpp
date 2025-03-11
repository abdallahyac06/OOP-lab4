#include "int_set.h"
#include <iostream>

IntegerSet::IntegerSet() {}

IntegerSet::IntegerSet(const IntegerSet &other) {
    *this = other;
}

void IntegerSet::operator=(const IntegerSet &other) {
    for (int i = 0; i < MAX_SIZE; i++) {
        set[i] = other.set[i];
    }
}

void IntegerSet::operator+=(int n) {
    if (n >= 0 && n < MAX_SIZE) {
        set[n] = true;
    }
}

void IntegerSet::operator-=(int n) {
    if (n >= 0 && n < MAX_SIZE) {
        set[n] = 0;
    }
}

IntegerSet IntegerSet::operator|(const IntegerSet &other) const {
    IntegerSet result;
    for (int i = 0; i < MAX_SIZE; i++) {
        result.set[i] = set[i] || other.set[i];
    }
    return result;
}

IntegerSet IntegerSet::operator&(const IntegerSet &other) const {
    IntegerSet result;
    for (int i = 0; i < MAX_SIZE; i++) {
        result.set[i] = set[i] && other.set[i];
    }
    return result;
}

bool IntegerSet::operator==(const IntegerSet &other) const {
    for (int i = 0; i < MAX_SIZE; i++) {
        if (set[i] != other.set[i]) {
            return false;
        }
    }
    return true;
}

void IntegerSet::inputSet(const int *array, int n) {
    for (int i = 0; i < n; i++) {
        *this += array[i];
    }
}

std::istream &operator>>(std::istream &input, IntegerSet &intSet) {
    int n;
    do {
        input >> n;
        intSet += n;
    } while(n != -1);
    return input;
}

std::ostream &operator<<(std::ostream &output, const IntegerSet &intSet) {
    bool isEmpty = true;
    output << "{";
    for (int i = 0; i < MAX_SIZE; i++) {
        if (intSet.set[i]) {
            isEmpty = false;
            output << i << ", ";
        }
    }
    output << (isEmpty ?  "---}" : "\b\b}");
    return output;
}
