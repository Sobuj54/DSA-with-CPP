#include <iostream>
using namespace std;

int parent[1000];

void dsuInitialization(int n)
{
    for (int i = 0; i < n; i++)
    {
        parent[i] = -1;
    }
    parent[1] = 3;
    parent[2] = 1;
}

// int find(int child) //complexity O(n)
// {
//     if (parent[child] == -1)
//         return child;
//     return find(parent[child]);
// }

// optimized find   complexity O(logn)
int find(int child)
{
    if (parent[child] == -1)
        return child;
    int leader = find(parent[child]);
    parent[child] = leader;
    return leader;
}

int main()
{
    dsuInitialization(4);
    cout << find(0) << endl;
    cout << find(1) << endl;
    cout << find(2) << endl;
    cout << find(3) << endl;

    return 0;
}