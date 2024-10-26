#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    int val = -1;
    for (int i = 1; i <= 1000; i++)
    {
        int mul = c * i;
        if (mul > b)
            break;
        if (mul >= a && mul <= b)
        {
            val = mul;
            break;
        }
    }
    cout << val << "\n";
    return 0;
}