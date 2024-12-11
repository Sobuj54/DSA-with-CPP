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
        int n, k, p;
        cin >> n >> k >> p;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        sort(v.rbegin(), v.rend());
        int ved = k + v[0], varun = p;
        for (int i = 1; i < n; i++)
        {
            varun += v[i];
        }

        if (ved > varun)
        {
            cout << "VED\n";
        }
        else if (varun > ved)
        {
            cout << "VARUN\n";
        }
        else
        {
            cout << "EQUAL\n";
        }
    }
    return 0;
}