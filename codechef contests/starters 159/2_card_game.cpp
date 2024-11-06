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
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            v[i] = i + 1;
        }

        int count = 0;
        for (int val : v)
        {
            if (val != x && (x + val) % 2 == 0)
            {
                count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}