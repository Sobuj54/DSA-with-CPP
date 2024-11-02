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
            cin >> v[i];

        int count = 0;
        for (int i = 0; i < n - 1; i++)
        {
            int sub = abs(v[i] - v[i + 1]);
            if (sub == 5 || sub == 7)
            {
                count++;
            }
        }

        if (count == n - 1)
            cout << "yes" << "\n";
        else
            cout << "no" << "\n";
    }
    return 0;
}