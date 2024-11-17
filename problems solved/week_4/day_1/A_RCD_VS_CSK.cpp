#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;
    cin >> x >> y;
    if (x - y >= 18)
    {
        cout << "RCB" << "\n";
    }
    else
    {
        cout << "CSK" << "\n";
    }
    return 0;
}