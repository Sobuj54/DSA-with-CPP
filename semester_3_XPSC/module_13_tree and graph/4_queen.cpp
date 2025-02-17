#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> g[n + 1], bad(n + 1), a(n + 1);
    int root;
    for (int i = 1; i <= n; i++)
    {
        int parent, child = i, flag;
        cin >> parent >> flag;
        if (parent != -1)
            g[parent].push_back(child);
        else
            root = i;

        if (flag == 1)
        {
            bad[parent]++;
            a[child] = 1;
        }
    }

    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        if (i != root && g[i].size() == bad[i] && a[i] == 1)
        {
            ans.push_back(i);
        }
    }

    if (ans.size() == 0)
        cout << -1 << "\n";
    else
    {
        for (auto x : ans)
            cout << x << " ";
        cout << "\n";
    }
    return 0;
}