#include <bits/stdc++.h>
using namespace std;

int dx[] = {1, -1, 0, 0, 1, 1, -1, -1};
int dy[] = {0, 0, 1, -1, 1, -1, -1, 1};

int n;
vector<vector<int> > a;

void dfs(int r, int c)
{
    a[r][c] = 2;
    for (int i = 0; i < 8; i++)
    {
        int x = dx[i] + r;
        int y = dy[i] + c;
        if (x > 0 && y > 0 && x <= n && y <= n && !a[x][y])
            dfs(x, y);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int ax, ay, bx, by, cx, cy;
    cin >> n >> ax >> ay >> bx >> by >> cx >> cy;

    a.assign(n + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= n; i++)
    {
        a[i][ay] = 1;
        a[ax][i] = 1;
    }

    int i = ax, j = ay;
    while (i < n && j < n)
        a[i++][j++] = 1;
    i = ax, j = ay;
    while (i > 0 && j < n)
        a[i--][j++] = 1;
    i = ax, j = ay;
    while (i < n && j > 0)
        a[i++][j--] = 1;
    i = ax, j = ay;
    while (i > 0 && j > 0)
        a[i--][j--] = 1;

    dfs(bx, by);

    cout << (a[cx][cy] == 2 ? "YES\n" : "NO\n");

    return 0;
}
