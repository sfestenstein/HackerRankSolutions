#include <cmath>
#include <math.h>
#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;


int LibraryFine()
{
    int lnReturnDay;
    cin >> lnReturnDay;
    int lnReturnMonth;
    cin >> lnReturnMonth;
    int lnReturnYear;
    cin >> lnReturnYear;

    int lnExpectedDay;
    cin >> lnExpectedDay;
    int lnExpectedMonth;
    cin >> lnExpectedMonth;
    int lnExpectedYear;
    cin >> lnExpectedYear;

    int lnReturnFine = 0;

    if(lnReturnYear > lnExpectedYear)
    {
        cout << (10000 * (lnReturnYear - lnExpectedYear)) << endl;
        return 0;
    }
    else if (lnReturnYear < lnExpectedYear)
    {
        cout << "0" << endl;
        return 0;
    }

    if (lnReturnMonth > lnExpectedMonth )
    {
        cout << (500 * (lnReturnMonth - lnExpectedMonth)) << endl;
        return 0;
    }
    else if (lnReturnMonth < lnExpectedMonth)
    {
        cout << "0" << endl;
        return 0;
    }

    if (lnReturnDay > lnExpectedDay)
    {
        cout << (15 * (lnReturnDay - lnExpectedDay)) << endl;
        return 0;
    }

    cout << lnReturnFine << endl;

    return 0;
}
