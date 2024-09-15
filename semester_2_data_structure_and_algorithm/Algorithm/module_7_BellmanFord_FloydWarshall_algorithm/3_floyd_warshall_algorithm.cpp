#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    int adj[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                adj[i][j] = 0;
            else
                adj[i][j] = INT_MAX;
        }
    }
    while (e--)
    {
        int a, b, cost;
        cin >> a >> b >> cost;
        adj[a][b] = cost;
    }

    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (adj[i][k] != INT_MAX && adj[k][j] != INT_MAX && adj[i][k] + adj[k][j] < adj[i][j])
                {
                    adj[i][j] = adj[i][k] + adj[k][j];
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (adj[i][j] == INT_MAX)
                cout << "INF" << " ";
            else
                cout << adj[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}