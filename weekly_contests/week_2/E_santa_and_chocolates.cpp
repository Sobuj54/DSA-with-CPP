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
        int n, k, total = 0;
        cin >> n >> k;

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            total += a;
        }

        if (total < n)
        {
            cout << "no" << "\n";
        }
        else
        {
            int minPossible = total / n;
            int maxPossible = minPossible + (total % n != 0 ? 1 : 0);
            if (maxPossible - minPossible <= k)
                cout << "yes" << "\n";
            else
                cout << "no" << "\n";
        }
    }
    return 0;
}