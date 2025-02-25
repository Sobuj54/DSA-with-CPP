#include <bits/stdc++.h>
using namespace std;

const int N = 1e9 + 7;

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
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        bool can = true;
        for (int i = n; i >= 2; i--)
        {
            if (v[i - 1] > v[i] && ((i - 1) & (i - 2)) != 0)
            {
                can = false;
                break;
            }
        }
        cout << (can ? "YES" : "NO") << endl;
    }

    return 0;
}
