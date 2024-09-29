// https://www.hackerrank.com/contests/phitron-monthly-programming-contest-a-batch-04-a-feb-2024/challenges/romeo-and-juliet-2/problem

#include <bits/stdc++.h>
#define pb push_back
using namespace std;

vector<int> adj[100005];
int lvl[100005];
bool vis[100005];

void dfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    lvl[src] = 0;

    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        for (int child : adj[parent])
        {
            if (!vis[child])
            {
                vis[child] = true;
                lvl[child] = lvl[parent] + 1;
                q.push(child);
            }
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
        adj[a].pb(b);
        adj[b].pb(a);
    }

    memset(vis, false, sizeof(vis));
    memset(lvl, -1, sizeof(lvl));

    int x, y, k;
    cin >> x >> y >> k;
    dfs(x);

    if (lvl[y] != -1 && lvl[y] <= k * 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}