#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        if ((a + b + c) % 2)
        {
            cout << "-1\n";
            continue;
        }
        long long x = (a + b + c) / 2;
        long long y = a + b;
        cout << min(x, y) << "\n";
    }

    return 0;
}
