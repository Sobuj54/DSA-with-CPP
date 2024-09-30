// https://cses.fi/problemset/task/1666/

#include <bits/stdc++.h>
using namespace std;

int parent[100005];
int sz[100005];

void initialization(int n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = -1;
        sz[i] = 1;
    }
}

int find(int node)
{
    if (parent[node] == -1)
        return node;
    return parent[node] = find(parent[node]);
}

void dsu_union(int a, int b)
{
    int leaderA = find(a);
    int leaderB = find(b);
    if (sz[leaderA] >= sz[leaderB])
    {
        parent[leaderB] = leaderA;
        sz[leaderA] += sz[leaderB];
    }
    else
    {
        parent[leaderA] = leaderB;
        sz[leaderB] += sz[leaderA];
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    initialization(n);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        if (find(a) != find(b))
            dsu_union(a, b);
    }

    vector<int> leaders;
    for (int i = 1; i <= n; i++)
    {
        int leader = find(i);
        leaders.push_back(leader);
    }

    sort(leaders.begin(), leaders.end());
    leaders.erase(unique(leaders.begin(), leaders.end()), leaders.end());

    cout << leaders.size() - 1 << endl;
    for (int i = 0; i < leaders.size() - 1; i++)
    {
        cout << leaders[i] << " " << leaders[i + 1] << endl;
    }
    return 0;
}