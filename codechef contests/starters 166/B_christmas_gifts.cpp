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
        int h, l, w;
        cin >> h >> l >> w;
        int area = 2 * (l * w + l * h + w * h);
        cout << 1000 / area << "\n";
    }
    return 0;
}