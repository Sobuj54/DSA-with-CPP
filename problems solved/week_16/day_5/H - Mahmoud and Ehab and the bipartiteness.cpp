#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<int>> adj;
long long s1 = 0, s2 = 0;

void dfs(int v, int p, int lvl)
{
    if (lvl % 2 == 0)
        s1++;
    else
        s2++;

    for (int u : adj[v])
    {
        if (u != p)
            dfs(u, v, lvl + 1);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    adj.assign(n, vector<int>());

    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        --a, --b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    dfs(0, -1, 0);

    cout << (s1 * s2) - (n - 1) << "\n";

    return 0;
}
