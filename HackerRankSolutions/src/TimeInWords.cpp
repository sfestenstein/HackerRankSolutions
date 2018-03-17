#include <cmath>
#include <math.h>
#include <cstdio>
#include <vector>
#include <set>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;


int TimeInWords
()
{
    int lnHours;
    int lnMinutes;

    cin >> lnHours;
    cin >> lnMinutes;

    map<int,string> lcDictionaryNumbers;
    lcDictionaryNumbers[1] = "one";
    lcDictionaryNumbers[2] = "two";
    lcDictionaryNumbers[3] = "three";
    lcDictionaryNumbers[4] = "four";
    lcDictionaryNumbers[5] = "five";
    lcDictionaryNumbers[6] = "six";
    lcDictionaryNumbers[7] = "seven";
    lcDictionaryNumbers[8] = "eight";
    lcDictionaryNumbers[9] = "nine";
    lcDictionaryNumbers[10] = "ten";
    lcDictionaryNumbers[11] = "eleven";
    lcDictionaryNumbers[12] = "twelve";
    lcDictionaryNumbers[13] = "thirteen";
    lcDictionaryNumbers[14] = "thirteen";
    lcDictionaryNumbers[15] = "quarter";
    lcDictionaryNumbers[16] = "sixteen";
    lcDictionaryNumbers[17] = "seventeen";
    lcDictionaryNumbers[18] = "eighteen";
    lcDictionaryNumbers[19] = "nineteen";
    lcDictionaryNumbers[20] = "twenty";
    lcDictionaryNumbers[21] = "twenty one";
    lcDictionaryNumbers[22] = "twenty two";
    lcDictionaryNumbers[23] = "twenty three";
    lcDictionaryNumbers[24] = "twentyf our";
    lcDictionaryNumbers[25] = "twenty five";
    lcDictionaryNumbers[26] = "twenty six";
    lcDictionaryNumbers[27] = "twenty seven";
    lcDictionaryNumbers[28] = "twenty eight";
    lcDictionaryNumbers[29] = "twenty nine";
    lcDictionaryNumbers[30] = "half";

    if (lnMinutes == 0)
    {
        cout << lcDictionaryNumbers[lnHours] << " o' clock" << endl;
    }
    else if (lnMinutes <= 30)
    {
        cout << lcDictionaryNumbers[lnMinutes];
        if (lnMinutes != 15 && lnMinutes != 30)
        {
            cout <<" minute";
            if (lnMinutes != 1)
            {
                cout << "s";
            }
        }

        cout << " past " << lcDictionaryNumbers[lnHours] << endl;
    }
    else if (lnMinutes > 30)
    {
        int lnDiffMinutes = 60 - lnMinutes;
        cout << lcDictionaryNumbers[lnDiffMinutes];
        if (lnDiffMinutes != 15)
        {
            cout <<" minute";
            if (lnDiffMinutes != 1)
            {
                cout << "s";
            }
        }
        if (lnHours == 12)
        {
            lnHours = 0;
        }
        cout << " to " << lcDictionaryNumbers[lnHours+1] << endl;
    }

    return 0;

}
