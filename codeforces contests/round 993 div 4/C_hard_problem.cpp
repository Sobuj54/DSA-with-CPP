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
        int m, a, b, c;
        cin >> m >> a >> b >> c;

        int row1 = m, row2 = m, total = 0;
        if (row1 >= a)
        {
            row1 -= a;
            total += a;
        }
        else
        {
            total += row1;
            row1 = 0;
        }

        if (row2 >= b)
        {
            row2 -= b;
            total += b;
        }
        else
        {
            total += row2;
            row2 = 0;
        }

        if (row1 != 0)
        {
            if (row1 >= c)
            {
                row1 -= c;
                total += c;
                c = 0;
            }
            else
            {
                total += row1;
                c -= row1;
                row1 = 0;
            }
        }
        if (row2 != 0)
        {

            if (row2 >= c)
            {
                row2 -= c;
                total += c;
                c = 0;
            }
            else
            {
                total += row2;
                c -= row2;
                row2 = 0;
            }
        }

        cout << total << "\n";
    }
    return 0;
}