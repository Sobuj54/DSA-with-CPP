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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        int discount = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] - discount > 0)
            {
                sum += v[i] - discount;
            }
            discount++;
        }
        cout << sum << "\n";
    }
    return 0;
}