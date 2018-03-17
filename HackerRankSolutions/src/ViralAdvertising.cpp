#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;


int ViralAdvertising()
{
    int lnNumberOfDays;
    cin >> lnNumberOfDays;

    long lnNumberOfLikes = 0;
    long lnNumberOfRecipients = 5;

    for (int lnI = 0; lnI < lnNumberOfDays; lnI++)
    {
        lnNumberOfLikes += lnNumberOfRecipients/2;
        lnNumberOfRecipients = lnNumberOfRecipients/2*3;
    }

    cout << lnNumberOfLikes << endl;

}
