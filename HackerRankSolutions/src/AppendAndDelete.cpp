#include <cmath>
#include <math.h>
#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;


int AppendAndDelete()
{
    string lcOriginalString;
    cin >> lcOriginalString;

    string lcModifiableString;
    cin >> lcModifiableString;

    int lnOperations;
    cin >> lnOperations;

    int lnMinLength = min(lcModifiableString.length(), lcOriginalString.length());
    int lnCommonLength = 0;

    for (int lnI = 0; lnI < lnMinLength; lnI++)
    {
        if (lcOriginalString[lnI] == lcModifiableString[lnI])
        {
            lnCommonLength++;
        }
        else
        {
            lnI = lnMinLength;
        }
    }

    int lnAbsDiff = abs(lnCommonLength - lcModifiableString.length());

    if (lcOriginalString.length() + lcModifiableString.length() - 2 * lnCommonLength > lnOperations)
    {
        cout << "No" << endl;
        return 0;
    }

    if ((lcOriginalString.length() + lcModifiableString.length()) % 2 ==lnOperations%2)
    {
        cout << "Yes" << endl;
        return 0;
    }

    if (((int)(lcOriginalString.length() + lcModifiableString.length()) - lnOperations) < 0)
    {
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;
    return 0;
}
