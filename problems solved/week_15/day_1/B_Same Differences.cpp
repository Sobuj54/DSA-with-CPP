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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x - i]++;
        }

        long long pairs = 0;
        for (auto [val, cnt] : mp)
        {
            if (cnt >= 2)
            {
                cnt--;
                long long combinations = (1LL * cnt * (cnt + 1)) / 2;
                pairs += 1LL * combinations;
            }
        }
        cout << pairs << "\n";
    }
    return 0;
}