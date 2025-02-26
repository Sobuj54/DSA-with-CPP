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
        int n, k, count = 0, flag = 0;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        if (v[0] == v[n - 1])
        {
            for (int i = 0; i < n; i++)
            {
                if (v[i] == v[0])
                    count++;
                if (count == k)
                    break;
            }
            cout << (count == k ? "YES" : "NO") << "\n";
        }
        else
        {
            int temp = n;
            for (int i = 0; i < n; i++)
            {
                if (v[i] == v[0])
                    count++;
                if (count == k)
                {
                    temp = i;
                    count = 0;
                    break;
                }
            }
            for (int i = temp + 1; i < n; i++)
            {
                if (v[i] == v[n - 1])
                    count++;
                if (count == k)
                {
                    flag = 1;
                    break;
                }
            }
            cout << (flag ? "YES" : "NO") << "\n";
        }
    }

    return 0;
}
