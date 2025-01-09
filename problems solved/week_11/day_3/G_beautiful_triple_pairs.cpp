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
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        map<vector<int>, int> cnt;
        long long ans = 0;

        for (int i = 0; i < n - 2; ++i)
        {
            vector<int> triplet = {a[i], a[i + 1], a[i + 2]};
            vector<vector<int>> mist(3, vector<int>(3, 0));

            mist[0] = {0, a[i + 1], a[i + 2]};
            mist[1] = {a[i], 0, a[i + 2]};
            mist[2] = {a[i], a[i + 1], 0};

            for (const auto &trip : mist)
            {
                ans += cnt[trip] - cnt[triplet];
                cnt[trip]++;
            }
            cnt[triplet]++;
        }

        cout << ans << endl;
    }
    return 0;
}