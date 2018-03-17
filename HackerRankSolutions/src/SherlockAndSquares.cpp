#include <cmath>
#include <math.h>
#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;


int SherlockAndSquares()
{
    int lnNumTestCases;
    cin >> lnNumTestCases;


    for (int lnTestCaseIndex = 0; lnTestCaseIndex < lnNumTestCases; lnTestCaseIndex++)
    {
        long lnBegin;
        long lnEnd;
        long lnNumberOfSquares = 0;

        cin >> lnBegin;
        cin >> lnEnd;

        lnNumberOfSquares = floor(sqrt(lnEnd)) - ceil(sqrt(lnBegin)) + 1;
        cout  << lnNumberOfSquares << endl;
    }

    return 0;
}
