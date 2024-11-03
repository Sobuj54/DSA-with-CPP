#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string g = "Timur";
    map<char, bool> mp;
    for (char c : g)
    {
        mp[c] = true;
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (n == 5)
        {
            int count = 0;
            map<char, int> tracking;
            for (char c : s)
            {
                if (mp.find(c) != mp.end() && tracking.find(c) == tracking.end())
                {
                    tracking[c];
                    count++;
                }
            }

            cout << (count == 5 ? "yes" : "no") << "\n";
        }
        else
            cout << "no" << "\n";
    }
    return 0;
}