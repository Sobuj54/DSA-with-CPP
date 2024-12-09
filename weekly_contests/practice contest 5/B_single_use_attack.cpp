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
        int h, x, y;
        cin >> h >> x >> y;

        int attacks = 1;
        h -= y;
        while (h > 0)
        {
            h -= x;
            attacks++;
        }
        cout << attacks << "\n";
    }
    return 0;
}