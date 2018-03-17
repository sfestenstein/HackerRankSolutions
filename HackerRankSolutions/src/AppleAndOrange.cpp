#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int AppleAndOrange(){
    int s;
    int t;
    cin >> s >> t;
    int a;
    int b;
    cin >> a >> b;
    int m;
    int n;
    cin >> m >> n;
    vector<int> apple(m);
    for(int apple_i = 0;apple_i < m;apple_i++){
       cin >> apple[apple_i];
    }
    vector<int> orange(n);
    for(int orange_i = 0;orange_i < n;orange_i++){
       cin >> orange[orange_i];
    }

    int lnAppleCount = 0;
    int lnOrangeCount = 0;

    for (int lnI = 0; lnI < apple.size(); lnI++)
    {
        if (apple[lnI] >= (s - a) && apple[lnI] <= (t - a))
        {
            lnAppleCount++;
        }
    }

    for (int lnI = 0; lnI < orange.size(); lnI++)
    {
        if (orange[lnI] <= (t - b) && orange[lnI] >= (s - b))
        {
            lnOrangeCount++;
        }
    }

    cout << lnAppleCount << endl;
    cout << lnOrangeCount << endl;
    return 0;
}
