#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    multiset<int> m;
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            m.insert(i);
            n /= i;
        }
    }

    if (n > 1)
        m.insert(n);

    for (auto x : m)
        cout << x << " ";
    cout << "\n";
    return 0;
}