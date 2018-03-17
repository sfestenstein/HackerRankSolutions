#include <cmath>
#include <math.h>
#include <cstdio>
#include <vector>
#include <set>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;


int JumpingOnTheClouds()
{
    int lnNumberOfClouds;
    cin >> lnNumberOfClouds;

    vector<int> lanClouds(lnNumberOfClouds);

    for (int lnI = 0; lnI < lnNumberOfClouds; lnI++)
    {
        cin >> lanClouds[lnI];
    }

    int lnPosition = 0;
    int lnMoves = 0;
    while (lnPosition != lnNumberOfClouds-1)
    {
        if (lanClouds[lnPosition+2] == 0)
        {
            lnPosition += 2;
            lnMoves++;
        }
        else if (lanClouds[lnPosition+1] == 0)
        {
            lnPosition += 1;
            lnMoves++;
        }
        if (lnPosition >= lnNumberOfClouds-1)
        {
            lnPosition = lnNumberOfClouds-1;
        }

    }
    cout << lnMoves << endl;


}
