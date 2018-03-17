#include <cmath>
#include <math.h>
#include <cstdio>
#include <vector>
#include <set>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;

int TopicScore(string acPerson1, string acPerson2)
{
    int lnScore = 0;
    for (int lnI = 0; lnI < acPerson1.size(); lnI++)
    {
        if (acPerson1[lnI] == '1' ||
            acPerson2[lnI] == '1')
        {
            lnScore++;
        }
    }
    return lnScore;
}

int AcmIcpcTeam()
{
    int lnNumberOfPeople;
    cin >> lnNumberOfPeople;

    int lnNumberOfTopics;
    cin >> lnNumberOfTopics;

    vector<string> lanTopicsPerPerson(lnNumberOfPeople);

    for (int lnI = 0; lnI < lnNumberOfPeople; lnI++)
    {
        string lcTopics;
        cin >> lcTopics;
        lanTopicsPerPerson[lnI] = lcTopics;
    }

    int lnMaxScore = 0;
    int lnTiedMaxScore = 0;

    for (int lnI = 0; lnI < lnNumberOfPeople; lnI++)
    {
        for (int lnJ = lnI+1; lnJ < lnNumberOfPeople; lnJ++)
        {
            int lnScore = TopicScore(lanTopicsPerPerson[lnI], lanTopicsPerPerson[lnJ]);
            if (lnScore > lnMaxScore)
            {
                lnMaxScore = lnScore;
                lnTiedMaxScore = 1;
            }
            else if (lnScore == lnMaxScore)
            {
                lnTiedMaxScore++;
            }
        }
    }
    cout << lnMaxScore << endl;
    cout << lnTiedMaxScore << endl;
    return 0;

}
