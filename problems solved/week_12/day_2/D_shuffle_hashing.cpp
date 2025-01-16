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
        string p, h;
        cin >> p >> h;
        map<char, int> cntP;
        for (auto c : p)
            cntP[c]++;

        int n = p.size();
        int x = h.size();
        if (n > x)
        {
            cout << "no\n";
            continue;
        }

        bool found = true;
        for (int i = 0; i <= x - n; i++)
        {
            found = true;
            string s = h.substr(i, n);
            map<char, int> m;
            for (auto c : s)
                m[c]++;

            for (auto c : p)
            {
                auto it = m.find(c);
                auto it1 = cntP.find(c);
                if (it == m.end() || *it1 != *it)
                {
                    found = false;
                    break;
                }
            }
            if (found)
            {
                cout << "yes\n";
                break;
            }
        }

        if (!found)
            cout << "no\n";
    }
    return 0;
}