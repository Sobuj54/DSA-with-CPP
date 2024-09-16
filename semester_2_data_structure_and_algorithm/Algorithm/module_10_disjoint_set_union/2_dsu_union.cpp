#include <iostream>
using namespace std;

int parent[1000];

void dsuInitialization(int n)
{
    for (int i = 0; i < n; i++)
    {
        parent[i] = -1;
    }
    parent[1] = 2;
    parent[2] = 3;
    parent[5] = 6;
    parent[6] = 7;
}

int find(int child)
{
    if (parent[child] == -1)
        return child;
    int leader = find(parent[child]);
    parent[child] = leader;
    return leader;
}

void dsu_union(int node1, int node2)
{
    int leaderA = find(node1);
    int leaderB = find(node2);
    parent[leaderA] = leaderB;
}

int main()
{
    dsuInitialization(8);
    cout << find(3) << endl;
    dsu_union(3, 5);
    cout << find(3) << endl;

    return 0;
}