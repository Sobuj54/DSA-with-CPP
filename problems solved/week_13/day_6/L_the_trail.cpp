#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int> > A(n, vector<int>(m));
    string s;
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> A[i][j];
        }
    }

    vector<int> R(n), C(m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            R[i] += A[i][j];
        }
    }
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            C[j] += A[i][j];
        }
    }

    int x = 0, y = 0, cnt = 0;
    while (cnt < n + m - 1)
    {
        if (s[cnt] == 'D')
        {
            A[x][y] = -R[x];
            R[x] += A[x][y];
            C[y] += A[x][y];
            x++;
        }
        else
        {
            A[x][y] = -C[y];
            R[x] += A[x][y];
            C[y] += A[x][y];
            y++;
        }
        cnt++;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
