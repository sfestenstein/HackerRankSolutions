#include <cmath>
#include <cstdio>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
using namespace std;

int CostDifference (int laaMagicSquare[][3], int laaCandidateSquare[][3])
{
    int lnDifference = 0;

    for (int lnI = 0; lnI < 3; lnI++)
    {
        for (int lnJ = 0; lnJ < 3; lnJ++)
        {
            lnDifference += abs(laaMagicSquare[lnI][lnJ] - laaCandidateSquare[lnI][lnJ]);
        }
    }

    return lnDifference;

}
int FormingAMagicSquare()
{
    int laanMatrixData[3][3];

    for (int lnI = 0; lnI < 3; lnI++)
    {
        cin >> laanMatrixData[lnI][0];
        cin >> laanMatrixData[lnI][1];
        cin >> laanMatrixData[lnI][2];
    }

    int laaanAllMagicSquares[8][3][3] =
        { {{8, 1, 6}, {3, 5, 7}, {4, 9, 2}},
          {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}},
          {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}},
          {{2, 9, 4}, {7, 5, 3}, {6, 1, 8}},
          {{8, 3, 4}, {1, 5, 9}, {6, 7, 2}},
          {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}},
          {{6, 7, 2}, {1, 5, 9}, {8, 3, 4}},
          {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}} };

    int lnLowestCost = 9*9*9;
    for (int lnI = 0; lnI < 8; lnI++)
    {
        if (CostDifference(laanMatrixData, laaanAllMagicSquares[lnI]) < lnLowestCost)
        {
            lnLowestCost = CostDifference(laanMatrixData, laaanAllMagicSquares[lnI]);
        }
    }

    cout << lnLowestCost << endl;
    return 0;
}
