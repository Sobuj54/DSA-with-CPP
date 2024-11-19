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
        int n, c, ans = 0;
        cin >> n >> c;
        priority_queue<int> pq;
        for (int i = 1; i <= n; ++i)
        {
            int x;
            cin >> x;
            pq.push(-x - i);
        }
        while (!pq.empty())
        {
            int x = -pq.top();
            pq.pop();
            if (x > c)
                break;
            ++ans;
            c -= x;
        }
        cout << ans << "\n";
    }
    return 0;
}