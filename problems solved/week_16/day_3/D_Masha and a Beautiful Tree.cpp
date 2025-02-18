#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int result = 0;
    for (int i = 1; i <= n; i *= 2)
    {
        vector<int> temp;

        for (int j = 1; j < arr.size(); j += 2)
        {
            if (arr[j - 1] > arr[j])
            {
                swap(arr[j - 1], arr[j]);
                ++result;
            }
            if (arr[j] - arr[j - 1] != i)
            {
                cout << -1 << endl;
                return;
            }

            temp.push_back(arr[j]);
        }

        arr = temp;
    }

    cout << result << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}