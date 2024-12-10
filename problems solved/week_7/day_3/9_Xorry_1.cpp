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
        int x;
        cin >> x;

        int a = x, count = 0;
        while (a > 1)
        {
            a /= 2;
            count++;
        }
        int temp = pow(2, count);
        cout << x - temp << " " << temp << endl;
    }
    return 0;
}