#include <iostream>
using namespace std;

int parent[1000];
int level[1000];

void dsuInitialization(int n)
{
    for (int i = 0; i < n; i++)
    {
        parent[i] = -1;
        level[i] = 0;
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

void dsu_union_by_rank(int node1, int node2)
{
    int leaderA = find(node1);
    int leaderB = find(node2);
    if (level[leaderA] > level[leaderB])
    {
        parent[leaderB] = leaderA;
    }
    else if (level[leaderA] < level[leaderB])
    {
        parent[leaderA] = leaderB;
    }
    else
    {
        parent[leaderA] = leaderB;
        level[leaderB]++;
    }
}

int main()
{
    dsuInitialization(7);
    dsu_union_by_rank(1, 2);
    dsu_union_by_rank(2, 3);
    dsu_union_by_rank(4, 5);
    dsu_union_by_rank(5, 6);
    dsu_union_by_rank(1, 4);
    cout << find(1) << endl;
    cout << find(4) << endl;

    return 0;
}