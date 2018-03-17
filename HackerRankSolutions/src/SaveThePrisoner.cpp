#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;


int SaveThePrisoner()
{
    int lnNumberOfTestCases;
    cin >> lnNumberOfTestCases;


    for (int lnI = 0; lnI < lnNumberOfTestCases; lnI++)
    {
        long lnNumberOfPrisoners;
        cin >> lnNumberOfPrisoners;

        long lnNumberOfSweets;
        cin >> lnNumberOfSweets;

        long lnFirstPrisoner;
        cin >> lnFirstPrisoner;

        long lnPrisonerToBePoisoned = (lnFirstPrisoner + (lnNumberOfSweets-1)) % lnNumberOfPrisoners;
        if (lnPrisonerToBePoisoned == 0)
        {
            lnPrisonerToBePoisoned = lnNumberOfPrisoners;
        }
        cout << lnPrisonerToBePoisoned << endl;
    }

}
