#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;


int CircularArrayRotation()
{
    int lnSizeOfArray;
    cin >> lnSizeOfArray;

    int lnNumberOfRotations;
    cin >> lnNumberOfRotations;

    int lnNumberOfQueries;
    cin >> lnNumberOfQueries;


    vector<int> lanArray(lnSizeOfArray);
    for (int lnI = 0; lnI < lnSizeOfArray; lnI++)
    {
        cin >> lanArray[lnI];
    }

    for (int lnI = 0; lnI < lnNumberOfQueries; lnI++)
    {
        int lnQuery;
        cin >> lnQuery;

        int lnNewIndex = ((lnQuery - lnNumberOfRotations) % lnSizeOfArray);
        if (lnNewIndex < 0)
        {
            lnNewIndex += lnSizeOfArray;
        }

        cout << lanArray[lnNewIndex] << endl;
    }
}
