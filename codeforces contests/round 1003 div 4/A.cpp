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
        int n = s.size();
        string p;
        for (int i = 0; i <= n - 3; i++)
        {
            p += s[i];
        }

        p += 'i';
        cout << p << "\n";
    }
    return 0;
}