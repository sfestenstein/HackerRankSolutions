#include <cmath>
#include <cstdio>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
using namespace std;


int DrawingBook()
{
    int lnNumberOfPages;
    cin >> lnNumberOfPages;

    int lnDesiredPage;
    cin >> lnDesiredPage;


    int lnFromFront = lnDesiredPage / 2;
    int lnFromBack = lnNumberOfPages / 2 - lnFromFront;

    if (lnFromFront < lnFromBack)
    {
        cout << lnFromFront;
    }
    else
    {
        cout << lnFromBack;
    }


    return 0;
}
