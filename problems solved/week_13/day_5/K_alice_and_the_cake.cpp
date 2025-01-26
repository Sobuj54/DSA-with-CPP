#include <bits/stdc++.h>
using namespace std;
using ll = long long;

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
        priority_queue<ll> p, q;
        ll sum = 0;

        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            p.push(x);
            sum += x;
        }

        q.push(sum);

        while (!p.empty() && !q.empty())
        {
            while (!p.empty() && !q.empty() && p.top() == q.top())
            {
                p.pop();
                q.pop();
            }

            if (q.empty())
                break;

            ll val = q.top();
            q.pop();

            if (val < p.top())
                break;

            ll flor = val / 2;
            ll cil = val - flor;

            q.push(flor);
            q.push(cil);
        }

        if (p.empty() && q.empty())
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
