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

        int res = 0, gold = 0;
        for (int i = 0; i < n; i++)
        {
            int cur;
            cin >> cur;
            if (!cur && gold)
                gold--, res++;
            else if (cur >= k)
                gold += cur;
        }

        cout << res << '\n';
    }
    return 0;
}