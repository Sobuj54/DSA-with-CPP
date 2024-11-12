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
        string a, b;
        cin >> a >> b;
        int sa = a.size(), sb = b.size();

        if (a[sa - 1] == b[sb - 1])
        {
            if (sa > sb)
            {
                if (a[sa - 1] == 'S')
                    cout << "<" << "\n";
                else
                    cout << ">" << "\n";
            }
            else if (sa < sb)
            {
                if (a[sa - 1] == 'S')
                    cout << ">" << "\n";
                else
                    cout << "<" << "\n";
            }
            else
                cout << "=" << "\n";
        }
        else
        {
            if (a[sa - 1] == 'S')
            {
                cout << "<" << "\n";
            }
            else if (a[sa - 1] == 'M')
            {
                if (b[sb - 1] == 'S')
                {
                    cout << ">" << "\n";
                }
                else
                {
                    cout << "<" << "\n";
                }
            }
            else
            {
                cout << ">" << "\n";
            }
        }
    }
    return 0;
}