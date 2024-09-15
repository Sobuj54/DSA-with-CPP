#include <bits/stdc++.h>
using namespace std;

vector<int> v[10005];
bool visited[1005];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        cout << parent << endl;

        for (int child : v[parent])
        {

            if (!visited[child])
            {
                q.push(child);
                visited[child] = true;
            }
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
    int src;
    cin >> src;
    bfs(src);
    return 0;
}