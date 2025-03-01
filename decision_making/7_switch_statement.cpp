//
// Created by vihanga_yohan on 3/1/25.
//
#include <iostream>

using namespace std;

int switchStatement() {
    short input;
    cout << "Enter a number: " << endl;
    cin >> input;

    switch (input) {
        case 1:
            cout << "you selected 1";
            break;
        case 2:
            cout << "you selected 2";
            break;
        default:
            cout << "you selected 0";
    }
    return 0;
}
