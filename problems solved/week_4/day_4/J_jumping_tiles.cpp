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
        string str;
        cin >> str;
        vector<int> arr[26];
        for (int i = 0; i < str.size(); i++)
        {
            arr[str[i] - 'a'].push_back(i);
        }

        int start = str[0] - 'a', end = str.back() - 'a';
        vector<int> ans;
        for (int i = start;; i <= end ? i++ : i--)
        {
            for (auto j : arr[i])
                ans.push_back(j + 1);
            if (i == end)
                break;
        }

        cout << abs(end - start) << ' ' << ans.size() << endl;
        for (auto n : ans)
        {
            cout << n << ' ';
        }
        cout << endl;
    }
    return 0;
}