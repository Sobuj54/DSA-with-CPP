#include <bits/stdc++.h>
using namespace std;

int cnt;
vector<bool> vis;
vector<vector<int> > adj;

int dfs(int s)
{
    vis[s] = true;
    int x = 0;
    bool f = true;
    for (int e : adj[s])
    {
        if (!vis[e])
        {
            f = false;
            int k = dfs(e);
            if (k % 2)
                x += k;
        }
    }
    if (f)
        return 1;
    x++;
    if (x % 2 == 0)
    {
        cnt++;
        return 0;
    }
    return x;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    adj.assign(n + 1, vector<int>());
    vis.assign(n + 1, false);

    for (int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    if (n % 2)
    {
        cout << "-1\n";
        return 0;
    }

    cnt = 0;
    dfs(1);

    cout << cnt - 1 << "\n";

    return 0;
}
