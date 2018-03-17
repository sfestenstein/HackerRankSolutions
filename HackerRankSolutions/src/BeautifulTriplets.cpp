#include <cmath>
#include <math.h>
#include <cstdio>
#include <vector>
#include <set>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;

int isPartlyBeautiful(int lnStartIndex, vector<int> aarnSequence, int anBeautifulDifference)
{
    int lnReturnIndex = -1;
    for (int lnI = lnStartIndex+1; lnI < aarnSequence.size(); lnI++)
    {
        if (aarnSequence[lnI] - aarnSequence[lnStartIndex]  == anBeautifulDifference)
        {
            return lnI;
        }
        if (aarnSequence[lnStartIndex] - aarnSequence[lnI] > anBeautifulDifference)
        {
            return -1;
        }
    }
    return -1;
}

int BeautifulTriplets()
{
    int lnSequenceSize;
    int lnBeautifulDifference;
    cin >> lnSequenceSize;
    cin >> lnBeautifulDifference;

    vector<int> lanSequence(lnSequenceSize);
    int lnNumBeautifulSequences = 0;
    for (int lnI = 0; lnI < lnSequenceSize; lnI++)
    {
        cin >> lanSequence[lnI];
    }

    for (long lnI = 0; lnI < lnSequenceSize-1; lnI++)
    {
        if (isPartlyBeautiful(lnI, lanSequence, lnBeautifulDifference) > -1 &&
            isPartlyBeautiful(isPartlyBeautiful(lnI, lanSequence, lnBeautifulDifference), lanSequence, lnBeautifulDifference) > -1)
        {
            lnNumBeautifulSequences++;
        }
    }
    cout << lnNumBeautifulSequences << endl;

    return 0;

}
