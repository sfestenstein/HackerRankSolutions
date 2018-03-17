#include <cmath>
#include <math.h>
#include <cstdio>
#include <vector>
#include <set>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;

long long numberOfDigits(long long anNumber)
{
    long long lnNumber = anNumber;
    long long lnCounter = 1;
    while (lnNumber / 10 != 0)
    {
        lnNumber /= 10;
        lnCounter++;
    }
    return lnCounter;
}
bool isKaprekar(long long anNumber)
{
    long long lnSquaredNumber = anNumber*anNumber;
    int lnNumberOfDigits = numberOfDigits(lnSquaredNumber);

    if (lnSquaredNumber == 1)
    {
        return true;
    }

    long long lnLeftDivisor = pow(10,lnNumberOfDigits/2);
    long long lnRightDivisor = pow(10,lnNumberOfDigits/2);

    if (lnNumberOfDigits%2 != 0)
    {
        lnRightDivisor = lnRightDivisor*10;
        lnLeftDivisor = lnLeftDivisor*10;
    }

    long long lnLeft = lnSquaredNumber / lnLeftDivisor;
    long long lnRight = lnSquaredNumber % lnRightDivisor;
    if (lnLeft + lnRight == anNumber && lnRight != 0)
    {
        return true;
    }

    return false;

}
int ModifiedKaprekarNumbers()
{
    long lnBeginNumber, lnEndNumber;
    cin >> lnBeginNumber;
    cin >> lnEndNumber;

    vector<int> lanKaprekarNumbers;

    for (long lnI = lnBeginNumber; lnI <= lnEndNumber; lnI++)
    {
        if (isKaprekar(lnI))
        {
            lanKaprekarNumbers.push_back(lnI);
        }
    }

    if (lanKaprekarNumbers.size() == 0)
    {
        cout << "INVALID RANGE" << endl;
    }
    else
    {
        for (int lnI = 0; lnI < lanKaprekarNumbers.size(); lnI++)
        {
            cout << lanKaprekarNumbers[lnI] << " ";
        }

    }
    return 0;

}
