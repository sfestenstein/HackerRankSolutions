#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int BonAppetit() {
    int lnNumberOfItems;
    int lnAllergicItem;
    cin >> lnNumberOfItems;
    cin >> lnAllergicItem;

    vector<int> lcItems;
    int lnEvenSplit = 0;
    for (int lnI = 0; lnI < lnNumberOfItems; lnI++)
    {
        int lnCostOfItem;
        cin >> lnCostOfItem;
        lcItems.push_back(lnCostOfItem);
        lnEvenSplit += lnCostOfItem;
    }

    int lnActualCharge;
    cin >> lnActualCharge;

    int lnFairSplit = lnEvenSplit - lcItems[lnAllergicItem];
    lnFairSplit = lnFairSplit / 2;

    if (lnActualCharge == lnFairSplit)
    {
        cout << "Bon Appetit" << endl;
    }
    else
    {
        cout << (lnActualCharge - lnFairSplit) << endl;
    }

    return 0;
}
