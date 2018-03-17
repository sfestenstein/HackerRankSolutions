#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;

int UtopianTree()
{

    int lnNumberTestCases;
    cin >> lnNumberTestCases;

    for (int lnI = 0; lnI < lnNumberTestCases; lnI++)
    {
        int lnCycles;
        int lnHeight = 1;
        cin >> lnCycles;

        for (int lnJ = 0; lnJ < lnCycles; lnJ++)
        {
            if (lnJ % 2 == 0)
            {
                lnHeight = lnHeight * 2;
            }
            else
            {
                lnHeight += 1;
            }
        }
        cout << lnHeight << endl;

    }
}
