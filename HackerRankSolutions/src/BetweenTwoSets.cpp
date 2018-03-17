#include <bits/stdc++.h>

using namespace std;

bool satisfiesA(vector< int > &a, int lnFactor)
{
    for (int lnI = 0; lnI < a.size(); lnI++)
    {
        if (lnFactor % a[lnI] != 0)
        {
            return false;
        }
    }
    return true;
}

bool satisfiesB(vector< int > &b, int lnFactor)
{
    for (int lnI = 0; lnI < b.size(); lnI++)
    {
        if (b[lnI] % lnFactor != 0)
        {
            return false;
        }
    }
    return true;
}

int getTotalX(vector < int > a, vector < int > b)
{
    int lnGreatestB = 0;
    int lnSatisfied = 0;
    for (int lnI = 0; lnI < b.size(); lnI++)
    {
        if (b[lnI] > lnGreatestB)
        {
            lnGreatestB = b[lnI];
        }
    }

    for (int lnI = 1; lnI <= lnGreatestB; lnI++)
    {
        if (satisfiesA(a, lnI) && satisfiesB(b, lnI))
        {
            lnSatisfied++;
        }
    }
    return lnSatisfied;
}

int BetweenTwoSets() {
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0; b_i < m; b_i++){
       cin >> b[b_i];
    }
    int total = getTotalX(a, b);
    cout << total << endl;
    return 0;
}
