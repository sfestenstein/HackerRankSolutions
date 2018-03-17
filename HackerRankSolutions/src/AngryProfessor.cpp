#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;

int AngryProfessor()
{
    int lnNumberTestCases;
    cin >> lnNumberTestCases;

    for (int lnI = 0; lnI < lnNumberTestCases; lnI++)
    {
        int lnNumberOfStudents;
        int lnCancellationThreshold;
        cin >> lnNumberOfStudents;
        cin >> lnCancellationThreshold;

        vector <int> lanStudentArrivalTime(lnNumberOfStudents);
        for (int lnJ = 0; lnJ < lnNumberOfStudents; lnJ++)
        {
            cin >> lanStudentArrivalTime[lnJ];
        }

        int lnNumLateStudents = 0;

        for (int lnJ = 0; lnJ < lnNumberOfStudents; lnJ++)
        {
            if (lanStudentArrivalTime[lnJ] > 0)
            {
                lnNumLateStudents++;
            }
        }
        if (lnNumberOfStudents - lnNumLateStudents < lnCancellationThreshold)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

    }
}
