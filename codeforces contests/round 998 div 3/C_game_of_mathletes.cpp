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
        multiset<int> ms;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            if (i == 0)
            {
                cin >> x;
                ms.insert(x);
            }
            else
            {
                cin >> x;
                int res = k - x;
                auto it = ms.find(res);
                if (it != ms.end())
                {
                    ms.erase(it);
                    cnt++;
                }
                else
                {
                    ms.insert(x);
                }
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}