#include <bits/stdc++.h>
#define ll long long
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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        ll sum = 0, cnt = 0, flag = false;
        for (int x : v)
        {
            sum += abs(x);
            if (x < 0 && !flag)
            {

                flag = true;
                cnt += 1;
            }
            if (x > 0)
                flag = false;
        }

        cout << sum << " " << cnt << "\n";
    }
    return 0;
}