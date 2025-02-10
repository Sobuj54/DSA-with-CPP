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
        int pivot = 0;
        long long cnt = 1;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x < pivot)
            {
                mp[pivot - x]++;
                cnt++;
            }
            else
                pivot = x;
        }

        long long coins = 0;
        long long track = 0;
        for (auto [val, c] : mp)
        {
            long long sum = (val - track);
            coins += 1LL * cnt * sum;
            cnt -= c;
            track += sum;
        }
        cout << coins << "\n";
    }
    return 0;
}