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
        string s, uniqueString;
        cin >> s;
        map<char, int> mp;

        for (char c : s)
        {
            if (mp.find(c) == mp.end())
                mp[c] = 0;
        }

        for (auto [x, y] : mp)
        {
            uniqueString += x;
        }

        for (int i = 0; i < uniqueString.size(); i++)
        {
            mp[uniqueString[i]] = i;
        }

        for (int i = 0; i < n; i++)
        {
            int matchIndex = mp[s[i]];
            auto c = uniqueString.rbegin() + matchIndex;
            s[i] = *c;
        }
        cout << s << "\n";
    }
    return 0;
}