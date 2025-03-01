//
// Created by vihanga_yohan on 3/1/25.
//
#include <iostream>

using namespace std;

int nestedIfStastement() {
    bool isCitizen = true;
    bool caResident = true;
    short tution = 0;
    if (isCitizen) {
        if (caResident) {
            tution = 0;
        } else {
            tution = 1000;
        }
    } else {
        tution = 3000;
    }
    return 0;
}