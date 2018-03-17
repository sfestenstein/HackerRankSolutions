#include <bits/stdc++.h>

using namespace std;

int solve(int n, vector < int > s, int anSum, int arSquares)
{
    int lnBreakoffs = 0;
    if (arSquares == 0)
    {
        return 0;
    }
    for (int lnI = 0; lnI <= n - arSquares; lnI++)
    {
        int lnSum = 0;
        for (int lnJ = lnI; lnJ < arSquares+lnI; lnJ++)
        {
            lnSum += s[lnJ];
        }
        if (lnSum == anSum)
        {
            lnBreakoffs++;
        }
    }
    return lnBreakoffs;
}

int BirthdayChocolate() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    int d;
    int m;
    cin >> d >> m;
    int result = solve(n, s, d, m);
    cout << result << endl;
    return 0;
}
