#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;


int FindDigits()
{
    int lnNumberOfTestCases;
    cin >> lnNumberOfTestCases;

    vector<long> lanDigits(lnNumberOfTestCases);
    for (int lnI = 0; lnI < lnNumberOfTestCases; lnI++)
    {
        cin >> lanDigits[lnI];
    }

    for (int lnTestCaseIndex = 0; lnTestCaseIndex < lnNumberOfTestCases; lnTestCaseIndex++)
    {
        long lnDigit = lanDigits[lnTestCaseIndex];
        long lnDivisorCount = 0;
        vector<int> lanDivisors;

        while (lnDigit > 0)
        {
            lanDivisors.push_back(lnDigit%10);
            lnDigit = lnDigit / 10;
        }
        lnDigit = lanDigits[lnTestCaseIndex];

        for (unsigned int lnI = 0; lnI < lanDivisors.size(); lnI++)
        {
            if (lanDivisors[lnI] != 0 &&
                lnDigit % lanDivisors[lnI] == 0)
            {
                lnDivisorCount++;
            }
        }
        cout << lnDivisorCount << endl;
    }

}
