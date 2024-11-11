#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        mp[s] = i;
    }

    set<pair<int, string>> st;
    for (auto [name, idx] : mp)
    {
        st.insert({idx, name});
    }

    for (auto it = st.rbegin(); it != st.rend(); it++)
    {
        auto [first, second] = *it;
        int x = second.size();
        cout << second[x - 2] << second[x - 1];
    }
    cout << "\n";
    return 0;
}