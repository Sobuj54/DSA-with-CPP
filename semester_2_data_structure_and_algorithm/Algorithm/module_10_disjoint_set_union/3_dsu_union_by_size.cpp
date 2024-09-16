#include <iostream>
using namespace std;

int parent[1000];
int groupSize[1000];

void dsuInitialization(int n)
{
    for (int i = 0; i < n; i++)
    {
        parent[i] = -1;
        groupSize[i] = 1;
    }
}

int find(int child)
{
    if (parent[child] == -1)
        return child;
    int leader = find(parent[child]);
    parent[child] = leader;
    return leader;
}

void dsu_union_by_size(int node1, int node2)
{
    int leaderA = find(node1);
    int leaderB = find(node2);
    if (groupSize[leaderA] > groupSize[leaderB])
    {
        parent[leaderB] = leaderA;
        groupSize[leaderA] += groupSize[leaderB];
    }
    else
    {
        parent[leaderA] = leaderB;
        groupSize[leaderB] += groupSize[leaderA];
    }
}

int main()
{
    dsuInitialization(7);
    dsu_union_by_size(1, 2);
    dsu_union_by_size(2, 3);
    dsu_union_by_size(4, 5);
    dsu_union_by_size(5, 6);
    dsu_union_by_size(1, 4);
    cout << find(1) << endl;
    cout << find(4) << endl;

    return 0;
}