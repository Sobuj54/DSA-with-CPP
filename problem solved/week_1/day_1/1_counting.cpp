// How many integers not less than A and not more than B are there?

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    if (b >= a)
    {
        int sub = b - a;
        cout << sub + 1 << "\n";
    }
    else
        cout << 0 << "\n";
    return 0;
}