//
// Created by vihanga_yohan on 2/28/25.
//
#include <iostream>

using namespace std;

int reading_Input() {
    cout << "Enter values for X and Y: ";
    double x, y;
    cin >> x >> y;
    double result = x + y;
    cout << "Result: " << result << endl;
    return 0;
}

double temp_converter() {
    cout << "Enter temprature in fahrenheit: ";
    double input_temp;
    cin >> input_temp;
    double result = input_temp / 32;
    cout << "Result : " << result << endl;
}