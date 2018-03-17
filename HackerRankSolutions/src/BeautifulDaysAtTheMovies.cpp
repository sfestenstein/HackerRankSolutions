#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;

int reverse(int anNumber)
{
    int lnNumber = anNumber;
    int lnReturnNumber = lnNumber%10;

    while (lnNumber / 10 > 0)
    {
        lnReturnNumber = lnReturnNumber*10;
        lnNumber = lnNumber/10;
        lnReturnNumber += lnNumber%10;
    }

    return lnReturnNumber;
}
int BeautifulDaysAtTheMovies()
{
    int lnBeginDay;
    cin >> lnBeginDay;

    int lnEndDay;
    cin >> lnEndDay;

    int lnDivisor;
    cin >> lnDivisor;

    int lnNumBeautifulDays = 0;
    for (int lnI = lnBeginDay; lnI <= lnEndDay; lnI++)
    {
        if (abs(lnI - reverse(lnI)) % lnDivisor == 0)
        {
            lnNumBeautifulDays++;
        }
    }

    cout << lnNumBeautifulDays << endl;

}
