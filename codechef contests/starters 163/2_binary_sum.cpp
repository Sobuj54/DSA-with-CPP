#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (n % 2 == 0)
        {
            if (n / 2 == k)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
        {
            int res = n / 2;
            if (res == k || res + 1 == k)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}
