#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<string, int> db;
    while (n--)
    {
        string s;
        cin >> s;
        auto it = db.find(s);
        if (it != db.end())
        {
            int suffix = it->second;
            string unique = s + to_string(suffix);
            db[s] = suffix + 1;
            db[unique] = 1;
            cout << unique << "\n";
        }
        else
        {
            db[s] = 1;
            cout << "OK" << "\n";
        }
    }
    return 0;
}