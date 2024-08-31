#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, word;
    getline(cin, s);
    stringstream ss(s);
    map<string, int> mp;

    while (ss >> word)
    {
        mp[word]++;
    }

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}