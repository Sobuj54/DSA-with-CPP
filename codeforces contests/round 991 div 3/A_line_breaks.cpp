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
        int n, m, sum = 0, w = 0;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            string a;
            cin >> a;
            sum += a.size();
            if (sum <= m)
            {
                w++;
            }
        }
        cout << w << "\n";
    }
    return 0;
}