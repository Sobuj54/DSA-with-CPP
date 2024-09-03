#include <bits/stdc++.h>
using namespace std;

int n, m;
char arr[10][10];
bool vis[10][10];
vector<pair<int, int>> v = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool isValid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void dfs(int i, int j)
{
    cout << i << " " << j << endl;
    vis[i][j] = true;
    for (int k = 0; k < 4; k++)
    {
        int si = i + v[k].first;
        int sj = j + v[k].second;
        if (isValid(si, sj) && !vis[si][sj])
        {
            dfs(si, sj);
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char a;
            cin >> a;
            arr[i][j] = a;
        }
    }

    memset(vis, false, sizeof(vis));
    int i, j;
    cin >> i >> j;
    dfs(i, j);
    return 0;
}