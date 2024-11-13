#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<pair<int, int> > p = {{-1, -1}, {-1, 1}, {1, 1}, {1, -1}};

int getSome(vector<vector<int> > &arr, int i, int j)
{
    int sum = arr[i][j];
    for (int k = 0; k < 4; k++)
    {
        int tempi = i, tempj = j;
        int x = p[k].first, y = p[k].second;
        while (tempi + x >= 0 && tempi + x < n && tempj + y >= 0 && tempj + y < m)
        {
            tempi += x;
            tempj += y;
            sum += arr[tempi][tempj];
        }
    }
    return sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        vector<vector<int> > arr(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }

        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                mx = max(getSome(arr, i, j), mx);
            }
        }

        cout << mx << '\n';
    }

    return 0;
}