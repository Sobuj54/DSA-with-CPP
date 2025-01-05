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
        int n, k;
        cin >> n >> k;
        vector<int> p(n);
        for (int i = 0; i < n; i++)
            cin >> p[i];

        int x = 1;
        for (int i = 0; i < n; i++)
        {
            if (p[i] == x)
                x++;
        }

        cout << (n - x + k) / k << "\n";
    }
    return 0;
}