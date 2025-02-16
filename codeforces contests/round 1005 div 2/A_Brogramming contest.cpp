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

        int mismatch = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] != s[i + 1])
                mismatch++;
        }
        if (mismatch == 0)
        {
            cout << (s[0] == '0' ? 0 : 1) << "\n";
            continue;
        }

        if (s[0] == '1')
        {
            cout << mismatch + 1 << "\n";
        }
        else
        {
            cout << mismatch << "\n";
        }
    }
    return 0;
}