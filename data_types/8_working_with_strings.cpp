//
// Created by vihanga_yohan on 3/1/25.
//
#include <iostream>

using namespace std;

int workingWithString() {
    char ch = 'a';
    string name;
    cout << "Enter your name: " << endl;
    cin >> name; // in this case, if the user input has a space everything including space will be ignored
    getline(cin, name); // this will include all user input with spaces
    cout << "Hi, " << name << endl;
    return 0;
}
