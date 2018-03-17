#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;


int JumpingOnTheCloudsRevisited()
{
    int lnNumberOfClouds;
    cin >> lnNumberOfClouds;

    int lnJumpSize;
    cin >> lnJumpSize;

    vector<int> lanClouds(lnNumberOfClouds);
    for (int lnI = 0; lnI < lnNumberOfClouds; lnI++)
    {
        cin >> lanClouds[lnI];
    }

    int lnPosition = 0;
    int lnEnergy = 100;
    while (lnPosition < lnNumberOfClouds)
    {
        lnPosition += (lnJumpSize);
        lnEnergy--;
        if (lanClouds[lnPosition] == 1)
        {
            lnEnergy -= 2;
        }
    }

    if (lanClouds[0] == 1)
    {
        lnEnergy -= 2;
    }
    cout << lnEnergy << endl;
}
