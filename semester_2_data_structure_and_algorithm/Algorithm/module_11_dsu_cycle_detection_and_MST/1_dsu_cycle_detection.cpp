#include <bits/stdc++.h>
using namespace std;

int parent[100];
int sz[100];

void initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        parent[i] = -1;
        sz[i] = 1;
    }
}

int find(int node)
{
    if (parent[node] == -1)
        return node;
    int leader = find(parent[node]);
    parent[node] = leader;
    return leader;
}

void dsu_union_by_size(int a, int b)
{
    int leaderA = find(a);
    int leaderB = find(b);
    if (sz[leaderA] > sz[leaderB])
    {
        parent[leaderB] = leaderA;
        sz[leaderA] += leaderB;
    }
    else
    {
        parent[leaderA] = leaderB;
        sz[leaderB] += leaderA;
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    initialize(n);
    bool cycle = false;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int leaderA = find(a);
        int leaderB = find(b);
        if (leaderA == leaderB)
        {
            cycle = true;
        }
        else
        {
            dsu_union_by_size(a, b);
        }
    }
    if (cycle)
        cout << "cycle found.";
    else
        cout << "no cycle found.";
}