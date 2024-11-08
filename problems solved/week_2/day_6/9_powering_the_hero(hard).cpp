#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        priority_queue<int> bonusDeck;
        long long totalPower = 0;

        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {
                if (!bonusDeck.empty())
                {
                    totalPower += bonusDeck.top();
                    bonusDeck.pop();
                }
            }
            else
            {
                bonusDeck.push(v[i]);
            }
        }

        cout << totalPower << endl;
    }

    return 0;
}
