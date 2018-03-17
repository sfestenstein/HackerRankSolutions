#include <cmath>
#include <math.h>
#include <cstdio>
#include <vector>
#include <set>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;


int CutTheSticks()
{
    int lnNumberOfSticks = 0;
    cin >> lnNumberOfSticks;

    multiset<int> lcStickSet;

    for (int lnI = 0; lnI < lnNumberOfSticks; lnI++)
    {
        int lnStickLength;
        cin >> lnStickLength;
        lcStickSet.insert(lnStickLength);
    }

    cout << lcStickSet.size() << endl;

    while (lcStickSet.size() > 0)
    {
        multiset<int>::iterator lcStickIterator = lcStickSet.begin();
        int lnMinStickLenght = *lcStickIterator;
        multiset< int > lcNewStickSet;

        for (;lcStickIterator!= lcStickSet.end(); lcStickIterator++)
        {
            if ((*lcStickIterator - lnMinStickLenght) > 0)
            {
                lcNewStickSet.insert(*lcStickIterator - lnMinStickLenght);
            }
        }
        lcStickSet = lcNewStickSet;
        if (lcStickSet.size() > 0)
            cout << lcStickSet.size() << endl;
    }
}
