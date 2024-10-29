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
        int n, firstB = -1, lastB = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B' && firstB == -1)
            {
                firstB = i;
            }
            else if (s[i] == 'B')
            {
                lastB = i;
            }
        }

        if (firstB != -1 && lastB)
        {
            cout << (lastB - firstB) + 1 << "\n";
        }
        else
        {
            cout << 1 << "\n";
        }
    }
    return 0;
}