#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        vector<ll> od;
        vector<ll> ev;
        for (auto i : arr)
        {
            if (i % 2 == 0)
                ev.push_back(i);
            else
                od.push_back(i);
        }

        if (od.size() == 0 || ev.size() == 0)
        {
            cout << "0" << "\n";
        }
        else
        {
            sort(od.begin(), od.end());
            sort(ev.begin(), ev.end());

            ll maxm = od.back();
            ll ans = ev.size();

            for (auto i : ev)
            {
                if (i > maxm)
                {
                    ans++;
                    break;
                }
                maxm += i;
            }

            cout << ans << "\n";
        }
    }
    return 0;
}