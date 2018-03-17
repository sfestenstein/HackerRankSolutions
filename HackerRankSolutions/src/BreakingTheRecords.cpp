#include <bits/stdc++.h>

using namespace std;

vector < int > getRecord(vector < int > s)
{
    vector <int> lnReturn;
    if (s.size() < 1)
    {
        lnReturn.push_back(0);
        lnReturn.push_back(0);
        return lnReturn;
    }

    int lnLowRecord = s[0];
    int lnHighRecord = s[0];
    int lnLowBreaks = 0;
    int lnHighBreaks = 0;

    for (int lnI = 1; lnI < s.size(); lnI++)
    {
        if (s[lnI] > lnHighRecord)
        {
            lnHighRecord = s[lnI];
            lnHighBreaks++;
        }
        if (s[lnI] < lnLowRecord)
        {
            lnLowRecord = s[lnI];
            lnLowBreaks++;
        }
    }
    lnReturn.push_back(lnHighBreaks);
    lnReturn.push_back(lnLowBreaks);
    return lnReturn;

}

int BreakingTheRecords() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    vector < int > result = getRecord(s);
    string separator = "", delimiter = " ";
    for(auto val: result) {
        cout<<separator<<val;
        separator = delimiter;
    }
    cout<<endl;
    return 0;
}
