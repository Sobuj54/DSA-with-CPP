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
        int l, r;
        cin >> l >> r;
        int x = 31 - __builtin_clz(l ^ r);
        int a = l | (1 << x) - 1;
        int b = a + 1;
        int c = (a == l ? r : l);
        cout << a << " " << b << " " << c << "\n";
    }
    return 0;
}