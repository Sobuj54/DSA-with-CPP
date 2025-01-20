#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    unordered_map<int, int> factors;
    cin >> N;
    while (N--)
    {
        int s;
        cin >> s;
        for (int i = 2; i * i <= s; i++)
        {
            if (s % i == 0)
                factors[i]++;
            while (s % i == 0)
                s /= i;
        }
        if (s > 1)
            factors[s]++;
    }

    int ans = 1;
    for (auto it = factors.begin(); it != factors.end(); it++)
    {
        ans = max(ans, (*it).second);
    }
    cout << ans;
    return 0;
}