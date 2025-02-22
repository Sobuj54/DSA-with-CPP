#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<bool> vis;
map<pair<int, int>, int> mp;

void dfs(int u, int prev)
{
    vis[u] = true;
    for (int v : adj[u])
    {
        if (!vis[v])
        {
            int val = (prev == 2 ? 3 : 2);
            mp[{u, v}] = val;
            mp[{v, u}] = val;
            dfs(v, val);
        }
    }
}

void test_case()
{
    int n;
    cin >> n;
    adj.assign(n, vector<int>());
    vector<pair<int, int>> edges(n - 1);

    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        --u, --v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        edges[i] = {u, v};
    }

    int start = -1;
    for (int u = 0; u < n; u++)
    {
        if (adj[u].size() > 2)
        {
            cout << "-1\n";
            return;
        }
        if (adj[u].size() == 1)
        {
            start = u;
        }
    }

    mp.clear();
    vis.assign(n, false);
    dfs(start, 3);

    for (auto &[u, v] : edges)
    {
        cout << mp[{u, v}] << " ";
    }
    cout << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        test_case();
    }

    return 0;
}
