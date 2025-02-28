//
// Created by vihanga_yohan on 2/28/25.
//
#include <iostream>
#include <iomanip>

using namespace std;

int formattingOutput() {
    cout << left << setw(10) <<  "Spring" << setw(10) << "Nice" << endl
        << "Summer" << "Hot";

    cout << fixed << setprecision(2) <<  12.45333; // fixed manipulator
    return 0;
}