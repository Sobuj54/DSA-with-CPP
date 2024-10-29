#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, w, wins = 0, loses = 0;
        cin >> n >> w;
        if (n != w)
        {
            for (int i = n - w + 1; i <= n; i++)
            {
                wins += pow(2, i);
            }
            for (int i = 1; i <= n - w; i++)
            {
                loses += pow(2, i);
            }
        }
        else
        {
            for (int i = 1; i <= w; i++)
            {
                wins += pow(2, i);
            }
        }
        cout << wins - loses << "\n";
    }
    return 0;
}