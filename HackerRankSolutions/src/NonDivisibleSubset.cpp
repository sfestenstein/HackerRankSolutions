#include <cmath>
#include <math.h>
#include <cstdio>
#include <vector>
#include <set>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;


int NonDivisibleSubset()
{
    int lnSetSize = 0;
    cin >> lnSetSize;

    int lnDivisor = 0;
    cin >> lnDivisor;

    int lanRemainders[lnDivisor];
    for (int lnI = 0; lnI < lnDivisor; lnI++)
    {
        lanRemainders[lnI] = 0;
    }

    int lnNumber;
    for (int lnI = 0; lnI < lnSetSize; lnI++)
    {
        cin >> lnNumber;
        lanRemainders[lnNumber%lnDivisor] = lanRemainders[lnNumber%lnDivisor] + 1;
    }

    int lnCount = 0;
    for (int lnI = 1; lnI <= lnDivisor/2; lnI++)
    {
        if (lnI == (lnDivisor-lnI) &&
            lanRemainders[lnI] != 0)
        {
            lnCount++;
        }
        else
        {
            lnCount+= max(lanRemainders[lnI], lanRemainders[lnDivisor-lnI]);
        }
    }
    if (lanRemainders[0] != 0)
    {
        lnCount++;
    }
    cout << lnCount << endl;

}
