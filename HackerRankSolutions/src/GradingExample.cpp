#include <bits/stdc++.h>

using namespace std;

vector < int > solve(vector < int > grades)
{
    vector <int> lcRoundedGrades;
    for (int lnI = 0; lnI < grades.size(); lnI++)
    {
        if (grades[lnI] < 38)
        {
            lcRoundedGrades.push_back(grades[lnI]);
        }
        else if (grades[lnI] % 5 > 2)
        {
            lcRoundedGrades.push_back(grades[lnI] + 5 - grades[lnI]%5);
        }
        else
        {
            lcRoundedGrades.push_back(grades[lnI]);
        }
    }

    return lcRoundedGrades;

}

int not_main() {
    int n;
    cin >> n;
    vector<int> grades(n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       cin >> grades[grades_i];
    }
    vector < int > result = solve(grades);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;


    return 0;
}
