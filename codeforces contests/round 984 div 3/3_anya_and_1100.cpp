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
        string s;
        cin >> s;

        set<int> st;
        for (int i = 0; i < s.size() - 3; i++)
        {
            if (s.substr(i, 4) == "1100")
            {
                st.insert(i);
            }
        }

        int q;
        cin >> q;
        while (q--)
        {
            int idx;
            char val;
            cin >> idx >> val;
            idx--;
            s[idx] = val;

            if (s.size() < 4)
            {
                cout << "no" << "\n";
                continue;
            }
            for (int i = idx - 3; i <= idx; i++)
            {
                if (i >= 0 && i + 3 <= s.size() - 1 && s.substr(i, 4) == "1100")
                {
                    st.insert(i);
                }
                else
                {
                    if (st.find(i) != st.end())
                    {
                        st.erase(i);
                    }
                }
            }

            cout << (st.empty() ? "no" : "yes") << "\n";
        }
    }

    return 0;
}