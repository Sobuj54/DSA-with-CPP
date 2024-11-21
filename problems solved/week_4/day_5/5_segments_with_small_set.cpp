#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    map<int, int> freq;
    int l = 0, unique = 0;
    long long count = 0;

    for (int r = 0; r < n; r++)
    {
        freq[a[r]]++;
        if (freq[a[r]] == 1)
        {
            unique++;
        }

        while (unique > k)
        {
            freq[a[l]]--;
            if (freq[a[l]] == 0)
            {
                unique--;
            }
            l++;
        }

        count += (r - l + 1);
    }

    cout << count << '\n';

    return 0;
}
