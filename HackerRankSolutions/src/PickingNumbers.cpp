#include <cmath>
#include <cstdio>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
using namespace std;

int PickingNumbers()
{
    int lnNumOfIntegers;
    cin >> lnNumOfIntegers;

    vector <int> lanIntegers(lnNumOfIntegers);

    for (int lnI = 0; lnI < lnNumOfIntegers; lnI++)
    {
        cin >> lanIntegers[lnI];
    }

    int lnMaxSatisfied = 0;
    for (int lnI = 0; lnI < lnNumOfIntegers-1; lnI++)
    {
        int lnUpCount = 0;
        int lnDownCount = 0;
        for (int lnJ = lnI+1; lnJ < lnNumOfIntegers; lnJ++)
        {
            if ((lanIntegers[lnI] - lanIntegers[lnJ]) == -1 ||
                (lanIntegers[lnI] - lanIntegers[lnJ]) == 0 )
            {
                lnUpCount++;
            }

            if ((lanIntegers[lnI] - lanIntegers[lnJ]) == 1 ||
                (lanIntegers[lnI] - lanIntegers[lnJ]) == 0 )
            {
                lnDownCount++;
            }
        }
        if (lnUpCount > lnMaxSatisfied)
        {
            lnMaxSatisfied = lnUpCount;
        }
        if (lnDownCount > lnMaxSatisfied)
        {
            lnMaxSatisfied = lnDownCount;
        }
    }

    cout << lnMaxSatisfied+1 << endl;
    return 0;
}
