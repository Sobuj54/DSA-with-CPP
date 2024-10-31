#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    map<string, string> mp1;
    vector<pair<string, string>> commands;

    for (int i = 0; i < n; i++)
    {
        string name, ip;
        cin >> name >> ip;
        mp1[ip] = name;
    }

    for (int i = 0; i < m; i++)
    {
        string command, ip;
        cin >> command >> ip;
        string newIp = ip.substr(0, ip.size() - 1);
        commands.push_back({command, newIp});
    }

    for (auto [command, ip] : commands)
    {
        cout << command << " " << ip << "; #" << mp1[ip] << "\n";
    }

    return 0;
}
