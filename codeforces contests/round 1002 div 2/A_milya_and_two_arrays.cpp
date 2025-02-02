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
        map<int, int> a, b;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a[x]++;
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            b[x]++;
        }

        if (a.size() == 1 && b.size() <= 2)
        {
            cout << "NO\n";
        }
        else if (b.size() == 1 && a.size() <= 2)
        {
            cout << "NO\n";
        }
        else if (a.size() == 2 && b.size() == 2 && n == 3)
        {
            auto ita = a.begin();
            auto itb = b.begin();
            vector<int> v;
            while (ita != a.end())
            {
                auto [x, y] = *ita;
                auto [m, n] = *itb;
                if (x - m != 0)
                {
                    v.push_back(1);
                }
                ita++;
                itb++;
            }
            if (v.size() > 1)
            {
                cout << "yes\n";
            }
            else
            {
                cout << "no\n";
            }
        }
        else
        {
            cout << "yes\n";
        }
    }
    return 0;
}