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
        int x, y;
        cin >> x >> y;

        int mm = (y + 1) / 2;
        x -= (mm * 5 * 3 - y * 2 * 2);
        x = max(x, 0);
        mm += (x + 5 * 3 - 1) / (5 * 3);

        cout << mm << endl;
    }
    return 0;
}