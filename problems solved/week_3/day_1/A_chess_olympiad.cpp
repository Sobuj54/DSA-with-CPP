#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, z;
    cin >> x >> y >> z;
    int totalGamesPlayed = x + y + z;
    float teamA = (x * 1) + ((float)y * 0.5), teamB = (z * 1) + ((float)y * 0.5);

    if (totalGamesPlayed == 4 && teamA >= teamB + 1)
    {
        cout << "yes" << "\n";
    }
    else
    {
        int remains = 4 - totalGamesPlayed;

        if (teamA + (remains * 1) >= teamB + 1)
        {
            cout << "yes" << "\n";
        }
        else
        {
            cout << "no" << "\n";
        }
    }
    return 0;
}