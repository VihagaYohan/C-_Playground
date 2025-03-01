//
// Created by vihanga_yohan on 3/1/25.
//
#include <iostream>

using namespace std;

int typeConversion() {
    int x = 1;
    double y = 2.2;
    double z = x + (int)y; // c-style casting
    z = x + static_cast<int>(y); // c++ casting
    cout << z << endl;
    return 0;
}