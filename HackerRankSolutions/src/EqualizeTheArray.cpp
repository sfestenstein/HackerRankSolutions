#include <cmath>
#include <math.h>
#include <cstdio>
#include <vector>
#include <set>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;


int EqualizeTheArray()
{
    int lnArraySize;
    cin >> lnArraySize;

    map<int,int> lanArrayCounts;

    int lnNumber = 0;
    for (int lnI = 0; lnI < lnArraySize; lnI++)
    {
        cin >> lnNumber;

        if (lanArrayCounts.find(lnNumber) == lanArrayCounts.end())
        {
            lanArrayCounts[lnNumber] = 1;
        }
        else
        {
            lanArrayCounts[lnNumber]++;
        }
    }

    int lnHighestValue = 0;
    for (map<int, int>::iterator lcIterator = lanArrayCounts.begin();
         lcIterator!= lanArrayCounts.end();
         lcIterator++)
    {
        if (lcIterator->second > lnHighestValue)
        {
            lnHighestValue = lcIterator->second;
        }
    }

    cout << lnArraySize - lnHighestValue << endl;
}
