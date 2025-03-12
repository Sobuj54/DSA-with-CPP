#include <bits/stdc++.h>
using namespace std;

int f(int l, int r, vector<int> &a, vector<vector<int>> &prefix_bc)
{
    int res = 0;
    for (int i = 0; i < 30; i++)
    {
        if ((a[l] >> i) & 1 && prefix_bc[r][i] - prefix_bc[l][i] == r - l)
        {
            res += 1 << i;
        }
    }
    return res;
}

int search(int l, int k, vector<int> &a, vector<vector<int>> &prefix_bc)
{
    int low = l, high = a.size() - 1, res = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (f(l, mid, a, prefix_bc) >= k)
        {
            res = mid + 1; // Convert to 1-based index
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return res;
}

void solveCase()
{
    int n, q;
    cin >> n;
    vector<int> a(n);
    for (int &x : a)
    {
        cin >> x;
    }

    vector<vector<int>> prefix_bc(n, vector<int>(30, 0));
    for (int i = 0; i < 30; i++)
    {
        prefix_bc[0][i] = (a[0] >> i) & 1;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            prefix_bc[i][j] = ((a[i] >> j) & 1) + prefix_bc[i - 1][j];
        }
    }

    cin >> q;
    while (q--)
    {
        int l, k;
        cin >> l >> k;
        cout << search(l - 1, k, a, prefix_bc) << " ";
    }
    cout << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solveCase();
    }

    return 0;
}
