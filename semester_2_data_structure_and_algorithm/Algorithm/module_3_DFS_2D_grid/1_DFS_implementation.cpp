#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> v[N];
bool visited[N];

void dfs(int src)
{
    cout << src << endl;
    visited[src] = true;
    for (int child : v[src])
    {
        if (!visited[child])
        {
            dfs(child);
        }
    }
}

int main()
{
    int e;
    cin >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    memset(visited, false, sizeof(visited));
    dfs(0);
    return 0;
}