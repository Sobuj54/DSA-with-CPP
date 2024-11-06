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
        int n, m;
        cin >> n >> m;
        vector<string> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int x = min(n / 2, m / 2);
        vector<string> v;
        for (int i = 0; i < x; i++)
        {
            string temp;
            for (int j = i; j < m - i; j++)
            {
                temp.push_back(arr[i][j]);
            }

            for (int j = i + 1; j < n - i; j++)
            {
                temp.push_back(arr[j][m - i - 1]);
            }

            for (int j = m - i - 2; j >= i; j--)
            {
                temp.push_back(arr[n - i - 1][j]);
            }

            for (int j = n - i - 2; j > i; j--)
            {
                temp.push_back(arr[j][i]);
            }
            v.push_back(temp);
        }

        int count = 0;
        for (auto x : v)
        {
            x.push_back(x[0]);
            x.push_back(x[1]);
            x.push_back(x[2]);

            for (int j = 0; j < x.size() - 3; j++)
            {
                if (x.substr(j, 4) == "1543")
                {
                    count++;
                }
            }
        }

        cout << count << "\n";
    }
    return 0;
}