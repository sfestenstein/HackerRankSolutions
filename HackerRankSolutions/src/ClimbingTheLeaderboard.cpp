#include <cmath>
#include <cstdio>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
using namespace std;

int ClimbingTheLeaderboard()
{
    int lnNumberOfLeaderboardScores;
    cin >> lnNumberOfLeaderboardScores;

    set <long> lcLeaderboardScores;
    long lnScore;

    for (int lnI = 0; lnI < lnNumberOfLeaderboardScores; lnI++)
    {
        cin >> lnScore;
        lcLeaderboardScores.insert(lnScore);
    }

    int lnNumberOfGames;
    cin >> lnNumberOfGames;

    vector <long> lanAlicesScores(lnNumberOfGames);

    for (int lnI = 0; lnI < lnNumberOfGames; lnI++)
    {
        cin >> lanAlicesScores[lnI];
    }


    // This is taking too long.  Not sure if I am getting the exercise wrong
    // or if the exercise is bugged on hackerrank.com
    for (int lnGameIndex = 0; lnGameIndex < lnNumberOfGames; lnGameIndex++)
    {
        int lnRank = 1;
        set<long>::reverse_iterator lcLeaderboardIterator;
        for (lcLeaderboardIterator = lcLeaderboardScores.rbegin();
             lcLeaderboardIterator != lcLeaderboardScores.rend();
             lcLeaderboardIterator++)
        {
            if (lanAlicesScores[lnGameIndex] < *lcLeaderboardIterator)
            {
                lnRank++;
            }
            else
            {
                break;
            }
        }
        cout << lnRank << endl;
    }

}
