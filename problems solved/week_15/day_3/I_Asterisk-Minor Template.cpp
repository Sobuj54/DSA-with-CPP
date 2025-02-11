#include <bits/stdc++.h>
using namespace std;

string match(string a, string b)
{
    int n = a.size(), m = b.size();
    int len = 2;
    for (int i = 0; i <= n - len; i++)
    {
        string subA = a.substr(i, len);
        for (int j = 0; j <= m - len; j++)
        {
            string subB = b.substr(j, len);
            if (subA == subB)
            {
                return subA;
            }
        }
    }
    return "";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int n = a.size(), m = b.size();
        if (a == b)
        {
            cout << "YES\n"
                 << a << "\n";
            continue;
        }
        if (a[0] == b[0])
        {
            cout << "YES\n"
                 << a[0] << "*" << "\n";
        }
        else if (a[n - 1] == b[m - 1])
        {
            cout << "YES\n"
                 << "*" << a[n - 1] << "\n";
        }
        else
        {
            string val = match(a, b);
            if (val == "")
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n"
                     << "*" << val << "*\n";
            }
        }
    }
    return 0;
}