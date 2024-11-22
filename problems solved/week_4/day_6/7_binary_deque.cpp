#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 2e5 + 5;
const int mod = 1e9 + 7;

int a[N];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int sum = 0;
        vector<pair<int, int> > pos;
        int ans = 0;
        pos.push_back(make_pair(0, -1));

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            if (a[i] == 1)
                pos.push_back(make_pair(sum, i));
            if (sum >= s)
            {
                int p = sum - s;
                pair<int, int> x = make_pair(p, -5);
                auto it = lower_bound(pos.begin(), pos.end(), x);
                int z = i - (*it).second;
                ans = max(ans, z);
            }
        }

        if (sum < s)
            cout << -1 << endl;
        else
            cout << n - ans << endl;
    }
    return 0;
}