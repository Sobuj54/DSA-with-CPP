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
        int n, k;
        cin >> n >> k;
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            m[x]++;
        }

        multiset<int> s;
        for (auto [x, cnt] : m)
        {
            s.insert(cnt);
        }

        while (k > 0 && !s.empty())
        {
            auto it = s.begin();
            if (k < *it)
                break;

            k -= *it;
            s.erase(it);
        }
        cout << (s.size() ? s.size() : 1) << "\n";
    }
    return 0;
}