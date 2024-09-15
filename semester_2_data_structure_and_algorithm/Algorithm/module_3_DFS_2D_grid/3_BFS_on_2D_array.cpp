#include <bits/stdc++.h>
using namespace std;

int n, m;
char arr[10][10];
bool vis[10][10];
int dis[10][10];
vector<pair<int, int>> v = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool isValid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void bfs(int i, int j)
{
    queue<pair<int, int>> q;
    q.push({i, j});
    vis[i][j] = true;
    dis[i][j] = 0;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        int a = par.first, b = par.second;
        cout << a << " " << b << endl;

        for (int k = 0; k < 4; k++)
        {
            int si = a + v[k].first;
            int sj = b + v[k].second;
            if (isValid(si, sj) && !vis[si][sj])
            {
                q.push({si, sj});
                vis[si][sj] = true;
                dis[si][sj] = dis[a][b] + 1;
            }
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
    memset(dis, -1, sizeof(dis));
    int i, j;
    cin >> i >> j;
    bfs(i, j);
    cout << "dis " << dis[0][3];
    return 0;
}