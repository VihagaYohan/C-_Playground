//
// Created by vihanga_yohan on 3/1/25.
//
#include <iostream>

using namespace std;

int ifStatement() {
    int temprature = 70;
    if (temprature < 60) {
        cout << "cold" << endl;
    } else if (temprature < 90) {
        cout << "hot" << endl;
    } else {
        cout << "nice" << endl;
    }
    return 0;
}