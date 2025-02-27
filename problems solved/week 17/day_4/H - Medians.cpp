#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        if (n == 1 && k == 1)
        {
            cout << "1 1\n";
        }
        else if (k == 1 || k == n)
        {
            cout << "-1\n";
        }
        else if (k % 2)
        {
            cout << "3\n1 " << k - 1 << " " << k + 2 << "\n";
        }
        else
        {
            cout << "3\n1 " << k << " " << k + 1 << "\n";
        }
    }

    return 0;
}
