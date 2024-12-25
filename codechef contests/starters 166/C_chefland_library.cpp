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
        int n;
        cin >> n;
        map<int, int> m;
        for (int i = 1; i <= n; i++)
        {
            int a;
            cin >> a;
            m[a] = i;
        }

        int penalty = 0;
        for (auto [a, b] : m)
        {
            penalty += b;
        }
        cout << penalty << "\n";
    }

    return 0;
}