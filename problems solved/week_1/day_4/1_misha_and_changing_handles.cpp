#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<string, pair<string, string> > mp;

    string old, cur;
    cin >> old >> cur;

    mp[cur] = {old, cur};
    for (int i = 1; i < n; i++)
    {
        cin >> old >> cur;
        auto it = mp.find(old);
        if (it != mp.end())
        {
            string prevOld = mp[old].first;
            mp[cur] = {prevOld, cur};
            mp.erase(it);
        }
        else
        {

            mp[cur] = {old, cur};
        }
    }

    cout << mp.size() << "\n";
    for (auto x : mp)
    {
        cout << x.second.first << " " << x.second.second << "\n";
    }
    return 0;
}