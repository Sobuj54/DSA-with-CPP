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
        long long cnt;
        cin >> cnt;

        vector<int> ar(n), height(n);

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> height[i];
        }

        long long head = 0, tail = 0, fruitcnt = 0, ans = 0;

        for (head = 0; head < n; head++)
        {
            fruitcnt += ar[head];

            while (tail <= head and fruitcnt > cnt)
            {
                fruitcnt -= ar[tail];
                tail++;
            }

            if (head > 0)
            {
                if (tail < head and (height[head - 1] % height[head]) != 0)
                {
                    tail = head;
                    fruitcnt = ar[head];
                }
            }

            ans = max(ans, head - tail + 1);
        }

        cout << ans << endl;
    }
    return 0;
}