//
// Created by vihanga_yohan on 3/1/25.
//
#include <iostream>

using namespace std;

int conditionalStatement() {
    int sales = 1'000;
    double commission = (sales > 1'000) ? .1 : 0.5;
    cout << commission << endl;
    return 0;
}
