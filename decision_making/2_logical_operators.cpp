//
// Created by vihanga_yohan on 3/1/25.
//
#include <iostream>

using namespace std;

int logicalOperator() {
    int age = 20;
    bool isEligible = age > 18 && age < 65;

    cout << boolalpha << !isEligible << endl;

    return 0;
}