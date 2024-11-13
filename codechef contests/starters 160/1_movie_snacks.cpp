#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;

    if (x + y <= z)
    {
        cout << (x * 2) + (y * 3) << "\n";
    }
    else
    {
        cout << (z * 2) + y << "\n";
    }
}
