#include <cmath>
#include <cstdio>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
using namespace std;


int CatsAndAMouse()
{
    int lnChases;
    cin >> lnChases;

    vector< vector <int> > lcChaseData(lnChases, vector <int>(3));

    for (int lnI = 0; lnI < lnChases; lnI++)
    {
        cin >> lcChaseData[lnI][0];
        cin >> lcChaseData[lnI][1];
        cin >> lcChaseData[lnI][2];
    }

    for (int lnI = 0; lnI < lnChases; lnI++)
    {
        int lnCatADistance = abs(lcChaseData[lnI][2] - lcChaseData[lnI][0]);
        int lnCatBDistance = abs(lcChaseData[lnI][2] - lcChaseData[lnI][1]);

        if (lnCatADistance < lnCatBDistance)
        {
            cout << "Cat A" << endl;
        }
        else if (lnCatBDistance < lnCatADistance)
        {
            cout << "Cat B" << endl;
        }
        else
        {
            cout << "Mouse C" << endl;
        }

    }


    return 0;
}
