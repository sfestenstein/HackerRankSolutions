#include <cmath>
#include <math.h>
#include <cstdio>
#include <vector>
#include <set>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;


int ServiceLane()
{
    int lnArrayLength;
    int lnTestCases;

    cin >> lnArrayLength;
    cin >> lnTestCases;

    vector<int> lanWidthArray(lnArrayLength);

    for (int lnI = 0; lnI < lnArrayLength; lnI++)
    {
        cin >> lanWidthArray[lnI];
    }

    int lnStartIndex;
    int lnEndIndex;
    int lnMinLength;
    for (int lnTestCaseIndex = 0; lnTestCaseIndex < lnTestCases; lnTestCaseIndex++)
    {
        cin >> lnStartIndex;
        cin >> lnEndIndex;

        lnMinLength = 3;
        for (int lnI = lnStartIndex; lnI <= lnEndIndex; lnI++)
        {
            if (lanWidthArray[lnI] < lnMinLength)
            {
                lnMinLength = lanWidthArray[lnI];
            }
        }
        cout << lnMinLength << endl;
    }

    return 0;

}
