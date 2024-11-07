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
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        priority_queue<int> pq;
        long long totalPower = 0;

        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {
                if (!pq.empty())
                {
                    totalPower += pq.top();
                    pq.pop();
                }
            }
            else
            {
                pq.push(v[i]);
            }
        }

        cout << totalPower << endl;
    }
    return 0;
}
