#include <cmath>
#include <cstdio>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
using namespace std;

int TheHurdleRace()
{
    int lnNumberOfHurdles;
    cin >> lnNumberOfHurdles;

    int lnMaxHeight;
    cin >> lnMaxHeight;

    vector <int> lanHurdles(lnNumberOfHurdles);


    for (int lnI = 0; lnI < lnNumberOfHurdles; lnI++)
    {
        cin >> lanHurdles[lnI];
    }

    int lnNumberOfPotions = 0;

    for (int lnI = 0; lnI < lnNumberOfHurdles; lnI++)
    {
        if (lanHurdles[lnI] > lnMaxHeight)
        {
            lnNumberOfPotions += lanHurdles[lnI] - lnMaxHeight;
            lnMaxHeight += lanHurdles[lnI] - lnMaxHeight;
        }
    }

    cout << lnNumberOfPotions;
}
