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
        string s;
        cin >> s;

        stack<char> st;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (!st.empty() && st.top() != s[i])
            {
                st.pop();
                cnt++;
            }
            else
            {
                st.push(s[i]);
            }
        }

        if (cnt % 2 != 0)
        {
            cout << "Zlatan\n";
        }
        else
        {
            cout << "Ramos\n";
        }
    }
    return 0;
}