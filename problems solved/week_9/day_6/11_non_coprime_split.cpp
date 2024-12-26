#include <bits/stdc++.h>
using namespace std;

int min_divisor(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return i;
        }
    }
    return n;
}

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
        bool found = false;
        for (int i = l; i <= r; ++i)
        {
            int md = min_divisor(i);
            if (md != i)
            {
                cout << md << " " << i - md << endl;
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << -1 << endl;
        }
    }
    return 0;
}