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
        string str;
        cin >> str;
        vector<bool> p(n + 10, false);
        for (int i = n - 1; i >= 0; i--)
        {
            if (str[i] == 'a' || str[i] == 'e')
            {
                i--;
                p[i] = true;
            }
            else
            {
                i -= 2;
                p[i] = true;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (i != 0 && p[i])
            {
                cout << '.';
            }
            cout << str[i];
        }
        cout << '\n';
    }
    return 0;
}