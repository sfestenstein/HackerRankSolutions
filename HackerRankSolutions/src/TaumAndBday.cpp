#include <cmath>
#include <math.h>
#include <cstdio>
#include <vector>
#include <set>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;


int TaumAndBday()
{
    long lnBeginNumber, lnEndNumber;
    cin >> lnBeginNumber;
    cin >> lnEndNumber;


    for (long lnI = lnBeginNumber; lnI <= lnEndNumber; lnI++)
    {
        long lnSquare = lnI*lnI;
        long lnDigits = 1;



        long lnBlackGifts,lnWhiteGifts;
        cin >> lnBlackGifts;
        cin >> lnWhiteGifts;

        long lnBlackCost,lnWhiteCost, lnConversionCost;
        cin >> lnBlackCost;
        cin >> lnWhiteCost;
        cin >> lnConversionCost;

        long lnTotalCost = 0;

        if (abs(lnBlackCost - lnWhiteCost) <= lnConversionCost)
        {
            lnTotalCost = lnBlackCost* lnBlackGifts + lnWhiteCost* lnWhiteGifts;
        }
        else if (lnBlackCost < lnWhiteCost)
        {
            lnTotalCost = lnBlackCost * (lnBlackGifts + lnWhiteGifts) + lnConversionCost * lnWhiteGifts;
        }
        else if (lnWhiteCost < lnBlackCost)
        {
            lnTotalCost = lnWhiteCost * (lnBlackGifts + lnWhiteGifts) + lnConversionCost * lnBlackGifts;
        }
        cout << lnTotalCost << endl;
    }
    return 0;

}
