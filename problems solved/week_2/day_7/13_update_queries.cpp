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
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        vector<int> v(m);
        for (int i = 0; i < m; i++)
        {
            cin >> v[i];
            v[i]--;
        }
        string t;
        cin >> t;
        set<int> st;
        for (int i = 0; i < m; i++)
        {
            st.insert(v[i]);
        }
        multiset<char> mt;
        for (int i = 0; i < m; i++)
        {
            mt.insert(t[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (st.find(i) != st.end())
            {
                auto it = mt.begin();
                s[i] = *it;
                mt.erase(mt.begin());
            }
        }
        cout << s << "\n";
    }
    return 0;
}