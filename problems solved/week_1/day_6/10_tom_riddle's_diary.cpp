#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<string, bool> mp;
    while (n--)
    {
        string s;
        cin >> s;

        auto it = mp.find(s);
        if (it != mp.end())
        {
            cout << "YES" << "\n";
        }
        else
        {
            mp[s] = true;
            cout << "NO" << "\n";
        }
    }
    return 0;
}