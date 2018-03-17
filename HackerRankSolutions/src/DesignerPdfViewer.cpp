#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;

int DesignerPdfViewer()
{
    string lcAlphabet = "abcdefghijklmnopqrstuvwxyz";
    map<char, int> lanFontMap;

    for (int lnI = 0; lnI < 26; lnI++)
    {
        int lnHeight;
        cin >> lnHeight;
        lanFontMap.insert(std::pair<char, int>(lcAlphabet[lnI], lnHeight));
    }

    string lcWord;
    cin >> lcWord;

    int lnMaxHeight = 0;
    for (int lnI = 0; lnI < lcWord.length(); lnI++)
    {
        if (lanFontMap[lcWord[lnI]] > lnMaxHeight)
        {
            lnMaxHeight = lanFontMap[lcWord[lnI]];
        }
    }

    cout << lnMaxHeight*lcWord.size();
}
