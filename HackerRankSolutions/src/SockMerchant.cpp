#include <cmath>
#include <cstdio>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
using namespace std;


int SockMerchant()
{
    int lnNumberOfSocks;
    cin >> lnNumberOfSocks;

    set<int> lcSockPile;
    int lnNumberOfPairs = 0;

    for (int lnI = 0; lnI < lnNumberOfSocks; lnI++)
    {
        int lnSockColor;
        cin >> lnSockColor;

        if (lcSockPile.find(lnSockColor) == lcSockPile.end())
        {
            lcSockPile.insert(lnSockColor);
        }
        else
        {
            lcSockPile.erase(lnSockColor);
            lnNumberOfPairs++;
        }
    }

    cout << lnNumberOfPairs << endl;
    return 0;
}
