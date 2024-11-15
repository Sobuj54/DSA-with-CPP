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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int r = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                r++;
                i += k - 1;
            }
        }
        cout << r << '\n';
    }
    return 0;
}