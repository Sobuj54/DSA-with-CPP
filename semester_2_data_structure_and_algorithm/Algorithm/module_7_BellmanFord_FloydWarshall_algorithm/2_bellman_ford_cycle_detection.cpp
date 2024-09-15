#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int u, v, cost;
    Edge(int u, int v, int cost)
    {
        this->u = u;
        this->v = v;
        this->cost = cost;
    }
};

int main()
{
    int n, e;
    cin >> n >> e;
    int dist[n];
    vector<Edge> edgeList;
    while (e--)
    {
        int u, v, cost;
        cin >> u >> v >> cost;
        edgeList.push_back(Edge(u, v, cost));
    }

    for (int i = 0; i < n; i++)
    {
        dist[i] = INT_MAX;
    }

    dist[0] = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (Edge edge : edgeList)
        {
            int u = edge.u;
            int v = edge.v;
            int cost = edge.cost;
            if (dist[u] < INT_MAX && dist[u] + cost < dist[v])
            {
                dist[v] = dist[u] + cost;
            }
        }
    }

    bool cycle = false;
    for (Edge edge : edgeList)
    {
        int u = edge.u;
        int v = edge.v;
        int cost = edge.cost;
        if (dist[u] < INT_MAX && dist[u] + cost < dist[v])
        {
            cycle = true;
            break;
        }
    }

    if (cycle)
        cout << "Cycle detected. NO solution possible." << endl;
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << i << " -> " << dist[i] << endl;
        }
    }
    return 0;
}