#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll l, r;
    cin >> l >> r;
    cout << "YES\n";

    for (int i = 0; i < (r - l) / 2 + 1; i++)
    {
        cout << l + i * 2 << " "
             << l + i * 2 + 1 << "\n";
    }
    return 0;
}