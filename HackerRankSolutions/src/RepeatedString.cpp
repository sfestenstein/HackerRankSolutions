#include <cmath>
#include <math.h>
#include <cstdio>
#include <vector>
#include <set>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;


int RepeatedString()
{
    string lcInfiniteString;
    cin >> lcInfiniteString;

    long lnSearchLength = 0;
    cin >> lnSearchLength;

    long lnInfiniteStringLength = lcInfiniteString.size();
    long lnCount = 0;

    for (long lnI = 0; lnI < lnInfiniteStringLength; lnI++)
    {
        if (lcInfiniteString[lnI] == 'a')
        {
            lnCount+= lnSearchLength / lnInfiniteStringLength;
            if (lnSearchLength % lnInfiniteStringLength > lnI)
            {
                lnCount++;
            }
        }

    }
    cout << lnCount << endl;

}
