#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int MigratoryBirds() {
    int lnSize;
    vector <int> lcNumbers;

    int lanTallies[5] = {0,0,0,0,0};
    cin >> lnSize;

    for (int lnI = 0; lnI < lnSize; lnI++)
    {
        int lnNumber;
        cin >> lnNumber;
        lcNumbers.push_back(lnNumber);
    }

    for (int lnI = 0; lnI < lnSize; lnI++)
    {
        lanTallies[lcNumbers[lnI]-1]++;
    }

    int lnMostBirds = 0;
    for (int lnI = 0; lnI < 5; lnI++)
    {
        if (lanTallies[lnI] > lanTallies[lnMostBirds])
        {
            lnMostBirds = lnI;
        }
    }

    cout << (lnMostBirds+1) << endl;


    return 0;
}
