#include <cmath>
#include <cstdio>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
using namespace std;


int CountingValleys()
{
    int lnNumberOfSteps;
    cin >> lnNumberOfSteps;

    string lcStepString;
    cin >> lcStepString;

    int lnSeaLevelPosition = 0;
    int lnValleyCount = 0;

    for (int lnI = 0; lnI < lcStepString.size()-1; lnI++)
    {
        if (lnSeaLevelPosition == 0 && lcStepString[lnI] == 'D')
        {
            lnValleyCount++;
        }

        if (lcStepString[lnI] == 'D')
        {
            lnSeaLevelPosition--;
        }
        else
        {
            lnSeaLevelPosition++;
        }
    }

    cout << lnValleyCount;

    return 0;
}
