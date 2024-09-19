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

class Edge
{
public:
    int u, v, w;
    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}

int main()
{
    int n, e;
    cin >> n >> e;
    initialize(n);
    vector<Edge> edgeList;
    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        edgeList.push_back(Edge(a, b, w));
    }

    sort(edgeList.begin(), edgeList.end(), cmp);
    int minCost = 0;
    for (Edge e : edgeList)
    {
        int leaderA = find(e.u);
        int leaderB = find(e.v);
        if (leaderA != leaderB)
        {
            dsu_union_by_size(e.u, e.v);
            minCost += e.w;
        }
    }
    cout << minCost;
    return 0;
}