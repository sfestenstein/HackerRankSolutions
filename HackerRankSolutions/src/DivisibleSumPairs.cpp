#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int DivisibleSum() {
    int lnSize;
    int lnDivisor;
    int lnNumSatisfiedConditions = 0;

    vector <int> lcNumbers;

    cin >> lnSize;
    cin >> lnDivisor;


    for (int lnI = 0; lnI < lnSize; lnI++)
    {
        int lnNumber;
        cin >> lnNumber;
        lcNumbers.push_back(lnNumber);
    }

    for (int lnI = 0; lnI < lnSize; lnI++)
    {
        for (int lnJ = lnI + 1; lnJ < lnSize; lnJ++)
        {
            if (//(lcNumbers[lnI] < lcNumbers[lnJ]) &&
                (lcNumbers[lnI] + lcNumbers[lnJ]) % lnDivisor == 0)
            {
                lnNumSatisfiedConditions++;
            }

        }
    }

    cout << lnNumSatisfiedConditions << endl;
    return 0;
}
