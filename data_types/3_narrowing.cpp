//
// Created by vihanga_yohan on 2/28/25.
//
#include <iostream>

using namespace std;

int narrowing() {
    int number = 1'000'000;
    short another = {number};
    return 0;
}

