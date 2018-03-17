#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int DayOfTheProgrammer() {
    int lnYear;

    cin >> lnYear;
    bool lbPrinted = false;

    if (lnYear == 1918)
    {
        cout << "26.09.1918" << endl;
        return 0;
    }
    if ((lnYear < 1918) &&
        (lnYear % 4 == 0))
    {
        cout << "12.09." << lnYear << endl;
        return 0;
    }

    if ((lnYear > 1918) &&
        ((lnYear % 4 == 0) && (lnYear % 100 != 0)))
    {
        cout << "12.09." << lnYear << endl;
        return 0;
    }

    if ((lnYear > 1918) &&
        (lnYear % 400 == 0))
    {
        cout << "12.09." << lnYear << endl;
        return 0;
    }
    cout << "13.09." << lnYear << endl;
    return 0;

}
