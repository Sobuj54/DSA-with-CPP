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
        vector<vector<string>> v;
        map<string, int> mp;
        for (int i = 0; i < 3; i++)
        {
            vector<string> vs;
            for (int j = 0; j < n; j++)
            {
                string s;
                cin >> s;
                auto it = mp.find(s);
                if (it != mp.end())
                {
                    if (mp[s] == 1)
                        mp[s] = 0;
                    else
                        mp[s] -= 2;
                }
                else
                {
                    mp[s] = 3;
                }
                vs.push_back(s);
            }
            v.push_back(vs);
        }

        vector<int> count(3, 0);
        for (int i = 0; i < 3; i++)
        {
            for (string x : v[i])
            {
                count[i] += mp[x];
            }
        }

        for (int val : count)
        {
            cout << val << " ";
        }
        cout << "\n";
    }
    return 0;
}