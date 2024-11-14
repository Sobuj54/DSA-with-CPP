#include <bits/stdc++.h>
using namespace std;

string changed(string &s)
{
    string a;
    for (char c : s)
    {
        if (a.empty())
        {
            a += c;
        }
        else
        {
            if (c != 'b' || a.back() != 'a')
            {
                a.push_back(c);
            }
        }
    }
    return a;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;

        if (changed(a) == changed(b))
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
}
