#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    int day = 1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] >= day)
            day++;
    }

    cout << day - 1 << "\n";
    return 0;
}