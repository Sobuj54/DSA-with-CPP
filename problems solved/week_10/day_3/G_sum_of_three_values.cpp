#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;
    vector<pair<int, int> > arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first;
        arr[i].second = i + 1;
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n - 2; i++)
    {
        int target = x - arr[i].first;
        int l = i + 1, r = n - 1;

        while (l < r)
        {
            int sum = arr[l].first + arr[r].first;

            if (sum == target)
            {
                cout << arr[i].second << " " << arr[l].second << " " << arr[r].second << endl;
                return 0;
            }
            else if (sum < target)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}