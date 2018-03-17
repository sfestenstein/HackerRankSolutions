#include <cmath>
#include <math.h>
#include <cstdio>
#include <vector>
#include <set>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;


int ChocolateFeast()
{
    int lnTrips;
    int lnDollars;
    int lnCost;
    int lnWrapperExchangeRate;

    cin >> lnTrips;

    for (int lnI = 0; lnI < lnTrips; lnI++)
    {
        cin >> lnDollars;
        cin >> lnCost;
        cin >> lnWrapperExchangeRate;

        int lnChocolatesThisTrip;
        int lnWrappers;
        lnChocolatesThisTrip = lnDollars / lnCost;
        lnWrappers = lnDollars / lnCost;
        while (lnWrappers >= lnWrapperExchangeRate)
        {
            lnChocolatesThisTrip += lnWrappers / lnWrapperExchangeRate;
            lnWrappers = lnWrappers % lnWrapperExchangeRate + lnWrappers / lnWrapperExchangeRate;
        }

        cout << lnChocolatesThisTrip << endl;
    }


    return 0;

}
