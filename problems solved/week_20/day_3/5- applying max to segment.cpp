#include <bits/stdc++.h>
using namespace std;

vector<int> tree;

void segment_tree_init(int n)
{
    int size = 1;
    while (size < n)
        size *= 2;
    tree.assign(size * 2, 0);
}

int query(int node, int index, int st, int sp)
{
    if (st > index || sp < index)
        return 0;
    if (st == sp)
        return tree[node];

    int mid = st + (sp - st) / 2;
    int q1 = query(node * 2, index, st, mid);
    int q2 = query(node * 2 + 1, index, mid + 1, sp);

    return max({q1, q2, tree[node]});
}

void update(int node, int l, int r, int st, int sp, int val)
{
    if (st > r || sp < l)
        return;
    if (st >= l && sp <= r)
    {
        tree[node] = max(tree[node], val);
    }
    else
    {
        int mid = st + (sp - st) / 2;
        update(node * 2, l, r, st, mid, val);
        update(node * 2 + 1, l, r, mid + 1, sp, val);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    segment_tree_init(n);

    for (int i = 0; i < m; i++)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            int l, r, val;
            cin >> l >> r >> val;
            r--;
            update(1, l, r, 0, n - 1, val);
        }
        else if (op == 2)
        {
            int index;
            cin >> index;
            cout << query(1, index, 0, n - 1) << "\n";
        }
    }

    return 0;
}
