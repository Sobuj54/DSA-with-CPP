#include <bits/stdc++.h>
using namespace std;

const int N = 1e+5;
vector<int> adj[N];
bool vis[N];
int parentArray[N];
bool found;

void dfs(int src)
{
    vis[src] = true;
    for (int child : adj[src])
    {
        if (vis[child] && parentArray[src] != child)
        {
            found = true;
        }
        if (!vis[child])
        {
            parentArray[child] = src;
            dfs(child);
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));
    memset(parentArray, -1, sizeof(parentArray));
    found = false;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
        }
    }
    if (found)
        cout << "cycle found";
    else
        cout << "cycle not found";
    return 0;
}