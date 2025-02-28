//
// Created by vihanga_yohan on 2/28/25.
//
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int generateRandomNumber() {
    long elapsedSeconds = time(nullptr);
    srand(elapsedSeconds);
    int number = rand() % 10;
    cout << elapsedSeconds;
    return 0;
}