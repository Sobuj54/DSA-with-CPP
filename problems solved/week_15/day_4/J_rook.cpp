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
        string s;
        cin >> s;
        for (char c = '1'; c <= '8'; c++)
        {
            if (s[1] != c)
                cout << s[0] << c << '\n';
        }
        for (char c = 'a'; c <= 'h'; c++)
        {
            if (s[0] != c)
                cout << c << s[1] << "\n";
        }
    }
    return 0;
}