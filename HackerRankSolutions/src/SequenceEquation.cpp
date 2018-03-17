#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;


int SequenceEquation()
{
    int lnSizeOfArray;
    cin >> lnSizeOfArray;

    map<int,int> lanNumberToIndexMap;
    for (int lnI = 1; lnI <= lnSizeOfArray; lnI++)
    {
        int lnP;
        cin >> lnP;
        lanNumberToIndexMap[lnP] = lnI;
    }

    for (int lnI = 0; lnI < lnSizeOfArray; lnI++)
    {
        int lnPositionOfLn = lanNumberToIndexMap[lnI+1];
        cout << lanNumberToIndexMap[lnPositionOfLn] << endl;
    }
}
