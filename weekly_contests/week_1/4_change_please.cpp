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
        int x;
        cin >> x;
        int owes = 100 - x;
        if (owes % 10 == 0)
        {
            cout << owes << "\n";
        }
        else
        {
            int res = owes / 10;
            cout << res * 10 << "\n";
        }
    }
    return 0;
}