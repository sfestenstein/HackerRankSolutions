#include <cmath>
#include <math.h>
#include <cstdio>
#include <vector>
#include <set>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;

int minimumDistance(int lnStartIndex, vector<int> aarnSequence)
{
    for (int lnI = lnStartIndex+1; lnI < aarnSequence.size(); lnI++)
    {
        if (aarnSequence[lnI] == aarnSequence[lnStartIndex])
        {
            return abs(lnI-lnStartIndex);
        }
    }
    return aarnSequence.size();
}

int MinimumDistance()
{
    int lnSequenceSize;

    cin >> lnSequenceSize;

    vector<int> lanSequence(lnSequenceSize);

    for (int lnI = 0; lnI < lnSequenceSize; lnI++)
    {
        cin >> lanSequence[lnI];
    }

    int lnMinimumDistance = lanSequence.size();

    for (long lnI = 0; lnI < lnSequenceSize-1; lnI++)
    {
        int lnThisMinimumDistance = minimumDistance(lnI, lanSequence);
        if (lnThisMinimumDistance < lnMinimumDistance)
        {
            lnMinimumDistance = lnThisMinimumDistance;
        }
    }
    if (lnMinimumDistance == lanSequence.size())
    {
        cout <<  -1 << endl;
    }
    else
    {
        cout << lnMinimumDistance << endl;
    }

    return 0;

}
