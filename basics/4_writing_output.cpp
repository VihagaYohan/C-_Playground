//
// Created by vihanga_yohan on 2/28/25.
//

#include <iostream>
using namespace std;

int writingOutput() {
    int x = 10;
    int y = 20;
    cout << "x = " << x << endl
                << "y = " << y;
}

// exercise
double showTaxAmounts () {
    double sales = 95000;
    const double state_tax_percentage = 4;
    const double county_tax_percentage = 2;

    double state_tax = (sales * state_tax_percentage) / 100;
    double county_tax = (sales * county_tax_percentage) / 100;

    double remaining_amount = sales - (state_tax + county_tax);

    cout << "total sales - $ " << sales << "state tax - $ " << state_tax << "county tax - $ " << county_tax
    << "remaining_amount - $" << remaining_amount << endl;
    return remaining_amount;
}
