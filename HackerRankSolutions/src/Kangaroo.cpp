#include <bits/stdc++.h>

using namespace std;

string kangaroo(int x1, int v1, int x2, int v2)
{
    if (x1 > x2 && v1 > v2)
    {
        return "NO";
    }
    if (x1 < x2 && v1 < v2)
    {
        return "NO";
    }
    if (x1 == x2 && v1 == v2)
    {
        return "YES";
    }
    if (x1 != x2 && v1 == v2)
    {
        return "NO";
    }

    int lnFasterKangaroPos = v1 > v2 ? x1 : x2;
    int lnSlowerKangaroPos = v1 < v2 ? x1 : x2;
    int lnFasterKangaroVel = v1 > v2 ? v1 : v2;
    int lnSlowerKangaroVel = v1 < v2 ? v1 : v2;

    if (lnFasterKangaroPos >= lnSlowerKangaroPos)
    {
        return "NO";
    }

    while (lnFasterKangaroPos < lnSlowerKangaroPos)
    {
        lnFasterKangaroPos += lnFasterKangaroVel;
        lnSlowerKangaroPos += lnSlowerKangaroVel;
        if (lnFasterKangaroPos == lnSlowerKangaroPos)
        {
            return "YES";
        }
    }
    return "NO";
}

int kangaroo() {
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    string result = kangaroo(x1, v1, x2, v2);
    cout << result << endl;
    return 0;
}
