#include "int_set.h"
#include <iostream>

int main() {
    int even[5] = {0, 2, 4, 6, 8};
    IntegerSet evenSet, oddSet;

    evenSet.inputSet(even, 5);
    std::cout << "Even numbers : " << evenSet << std::endl;

    std::cout << "Enter some odd numbers (-1 to stop)." << std::endl;
    std::cin >> oddSet;
    std::cout << "Odd numbers : " << oddSet << std::endl;

    IntegerSet unionSet = evenSet | oddSet;
    std::cout << "The union of the two sets : " << unionSet << std::endl;
    
    IntegerSet intersectionSet;
    intersectionSet = evenSet & oddSet;
    std::cout << "The intersection of the two sets : " << intersectionSet << std::endl;

    return 0;
}