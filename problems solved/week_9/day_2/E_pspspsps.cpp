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
        string s;
        cin >> s;
        if (s[0] == 's')
            s[0] = '.';
        if (s.back() == 'p')
            s.back() = '.';

        bool found_p = false;
        bool found_s = false;
        for (const auto c : s)
        {

            if (c == 'p')
            {
                found_p = true;
            }
            if (c == 's')
            {
                found_s = true;
            }
        }
        cout << (found_p && found_s ? "NO" : "YES") << '\n';
    }
    return 0;
}