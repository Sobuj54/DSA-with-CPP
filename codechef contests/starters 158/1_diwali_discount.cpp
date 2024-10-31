#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (b >= a)
        cout << 0 << "\n";
    else
        cout << a - b << "\n";
}
