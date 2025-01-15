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
        for (int i = 0; i < n; i++)
            cin >> a[i];

        if (n == 1)
        {
            cout << -1 << "\n";
            continue;
        }
        set<int> s;
        for (int i = 1; i <= n; i++)
            s.insert(i);

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            auto it = s.begin();
            if (a[i] != *it)
            {
                v[i] = *it;
                s.erase(it);
            }
            else
            {
                if (s.size() == 1)
                {
                    v[i] = *it;
                    s.erase(it);
                    swap(v[i], v[i - 1]);
                }
                else
                {
                    it++;
                    v[i] = *it;
                    s.erase(it);
                }
            }
        }

        for (auto val : v)
            cout << val << " ";
        cout << "\n";
    }
    return 0;
}