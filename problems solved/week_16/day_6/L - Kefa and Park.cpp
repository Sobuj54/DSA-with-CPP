#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<vector<ll>> adj;
vector<bool> vis;
vector<ll> cc;
ll n, m, total = 0;

void dfs(ll s, ll sum)
{
    if (vis[s])
        return;
    vis[s] = true;

    sum = (cc[s] ? sum + 1 : 0);
    if (sum > m)
        return;

    if (s != 1 && adj[s].size() == 1)
        total++;

    for (ll u : adj[s])
    {
        dfs(u, sum);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    adj.assign(n + 1, vector<ll>());
    vis.assign(n + 1, false);
    cc.resize(n + 1);

    for (ll i = 1; i <= n; i++)
    {
        cin >> cc[i];
    }

    for (ll i = 0; i < n - 1; i++)
    {
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1, 0);

    cout << total << "\n";

    return 0;
}
