//
// Created by vihanga_yohan on 3/1/25.
//

#include <iostream>

using namespace std;

int orderOfOperators () {
    /*
     * ()
     * !
     * &&
     * ||
     */
    bool a = true;
    bool b = false;
    bool c = false;
    bool result = b && !a;

    cout << boolalpha << result << endl;
    return 0;
}
