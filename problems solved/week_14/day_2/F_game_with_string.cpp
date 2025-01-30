#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    stack<char> st;
    int k = 0;

    for (char c : s)
    {
        if (!st.empty() && st.top() == c)
        {
            k++;
            st.pop();
        }
        else
        {
            st.push(c);
        }
    }

    cout << (k % 2 ? "YES" : "NO") << "\n";

    return 0;
}