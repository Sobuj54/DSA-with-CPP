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
        ll n;
        cin >> n;

        vector<char> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (arr[n - 1] == '1')
        {
            cout << "NO" << endl;
        }
        else
        {
            vector<ll> ans;
            ll j = n - 1;
            while (j >= 0)
            {
                ll onesCount = 0;
                ll zeroCount = 0;
                ll tempj = j;
                while (tempj >= 0 && arr[tempj] == '0')
                {
                    zeroCount++;
                    tempj--;
                }
                while (tempj >= 0 && arr[tempj] == '1')
                {
                    onesCount++;
                    tempj--;
                }

                for (ll k = 0; k < zeroCount - 1; k++)
                {
                    ans.push_back(0);
                }
                for (ll k = 0; k < onesCount; k++)
                {
                    ans.push_back(0);
                }
                ans.push_back(onesCount);
                j = tempj;
            }
            cout << "YES" << endl;
            for (auto el : ans)
            {
                cout << el << " ";
            }
            cout << endl;
        }
    }

    return 0;
}