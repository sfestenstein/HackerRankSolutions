#include <cmath>
#include <cstdio>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
using namespace std;


int ElectronicsShop()
{
    int lnDollars;
    cin >> lnDollars;

    int lnNumberOfKeyboards;
    cin >> lnNumberOfKeyboards;

    int lnNumberOfUsbs;
    cin >> lnNumberOfUsbs;

    vector<int> lcKeyboardPrices(lnNumberOfKeyboards);
    for (int lnI = 0; lnI < lnNumberOfKeyboards; lnI++)
    {
        cin >> lcKeyboardPrices[lnI];
    }

    vector<int> lcUsbPrices(lnNumberOfUsbs);
    for (int lnI = 0; lnI < lnNumberOfUsbs; lnI++)
    {
        cin >> lcUsbPrices[lnI];
    }

    int lnCost = -1;

    for (int lnI = 0; lnI < lnNumberOfKeyboards; lnI++)
    {
        for (int lnJ = 0; lnJ < lnNumberOfUsbs; lnJ++)
        {
            if (lcKeyboardPrices[lnI] + lcUsbPrices[lnJ] <= lnDollars &&
                lcKeyboardPrices[lnI] + lcUsbPrices[lnJ] > lnCost)
            {
                lnCost = lcKeyboardPrices[lnI] + lcUsbPrices[lnJ];
            }
        }
    }

    cout << lnCost;

    return 0;
}
