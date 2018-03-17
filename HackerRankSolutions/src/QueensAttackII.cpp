#include <cmath>
#include <math.h>
#include <cstdio>
#include <vector>
#include <set>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;


int QueensAttackII()
{
    int lnBoardSize;
    cin >> lnBoardSize;

    set<long long> lcObstacles;

    int lnNumberOfObstacles;
    cin >> lnNumberOfObstacles;

    int lnQueenXPosition;
    cin >> lnQueenXPosition;
    lnQueenXPosition--;

    int lnQueenYPosition;
    cin >> lnQueenYPosition;
    lnQueenYPosition--;

    int lnX;
    int lnY;

    for (int lnI = 0; lnI < lnNumberOfObstacles; lnI++)
    {
        cin >> lnX;
        cin >> lnY;
        lnX--;
        lnY--;

        lcObstacles.insert(lnX + lnY*100001);
    }

    int lnCount = 0;

    // go up
    for (int lnI = lnQueenYPosition+1; lnI < lnBoardSize; lnI++)
    {
        lnX = lnQueenXPosition;
        lnY = lnI;
        if (lcObstacles.find(lnX + lnY*100001) == lcObstacles.end())
        {
            lnCount++;
        }
        else
        {
            lnI = lnBoardSize;
        }
    }

    // go down
    for (int lnI = lnQueenYPosition-1; lnI >= 0; lnI--)
    {
        lnX = lnQueenXPosition;
        lnY = lnI;
        if (lcObstacles.find(lnX + lnY*100001) == lcObstacles.end())
        {
            lnCount++;
        }
        else
        {
            lnI = 0;
        }
    }

    // go Left
    for (int lnI = lnQueenXPosition+1; lnI < lnBoardSize; lnI++)
    {
        lnX = lnI;
        lnY = lnQueenYPosition;
        if (lcObstacles.find(lnX + lnY*100001) == lcObstacles.end())
        {
            lnCount++;
        }
        else
        {
            lnI = lnBoardSize;
        }
    }

    // go right
    for (int lnI = lnQueenXPosition-1; lnI >= 0; lnI--)
    {
        lnX = lnI;
        lnY = lnQueenYPosition;
        if (lcObstacles.find(lnX + lnY*100001) == lcObstacles.end())
        {
            lnCount++;
        }
        else
        {
            lnI = 0;
        }
    }

    // go up right
    for (int lnI = 1; lnI < lnBoardSize; lnI++)
    {
        lnX = lnQueenXPosition+lnI;
        lnY = lnQueenYPosition+lnI;
        if (lnQueenXPosition+lnI < lnBoardSize && lnQueenYPosition+lnI < lnBoardSize)
        {
            if (lcObstacles.find(lnX + lnY*100001) == lcObstacles.end())
            {
                lnCount++;
            }
            else {lnI = lnBoardSize;}
        }
    }

    // go up Left
    for (int lnI = 1; lnI < lnBoardSize; lnI++)
    {
        lnX = lnQueenXPosition-lnI;
        lnY = lnQueenYPosition+lnI;
        if (lnQueenXPosition-lnI >= 0 && lnQueenYPosition+lnI < lnBoardSize)
        {
            if (lcObstacles.find(lnX + lnY*100001) == lcObstacles.end())
            {
                lnCount++;
            }
            else {lnI = lnBoardSize;}
        }
    }

    // go down left
    for (int lnI = 1; lnI < lnBoardSize; lnI++)
    {
        lnX = lnQueenXPosition-lnI;
        lnY = lnQueenYPosition-lnI;
        if (lnQueenXPosition-lnI >= 0 && lnQueenYPosition-lnI >= 0 )
        {
            if (lcObstacles.find(lnX + lnY*100001) == lcObstacles.end())
            {
                lnCount++;
            }
            else {lnI = lnBoardSize;}
        }
    }

    // go down right
    for (int lnI = 1; lnI < lnBoardSize; lnI++)
    {
        lnX = lnQueenXPosition+lnI;
        lnY = lnQueenYPosition-lnI;
        if (lnQueenXPosition+lnI < lnBoardSize && lnQueenYPosition-lnI >= 0)
        {
            if (lcObstacles.find(lnX + lnY*100001) == lcObstacles.end())
            {
                lnCount++;
            }
            else {lnI = lnBoardSize;}
        }
    }

    cout << lnCount << endl;
}
