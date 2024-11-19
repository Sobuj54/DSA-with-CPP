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
        int m = n * (n - 1) / 2;
        vector<int> v(m);
        for (int i = 0; i < m; i++)
            cin >> v[i];

        sort(v.begin(), v.end());
        for (int i = 0; i < m; i += --n)
            cout << v[i] << ' ';
        cout << "1000000000" << "\n";
    }
    return 0;
}