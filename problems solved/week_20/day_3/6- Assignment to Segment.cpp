#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int> > tree;

void segment_tree_init(int n)
{
    int size = 1;
    while (size < n)
        size *= 2;
    tree.assign(size * 2, {0, 0});
}

pair<int, int> operation(pair<int, int> a, pair<int, int> b)
{
    return (a.second > b.second) ? a : b;
}

pair<int, int> query(int node, int index, int st, int sp)
{
    if (st > index || sp < index)
        return {0, 0};
    if (st == sp)
        return tree[node];

    int mid = st + (sp - st) / 2;
    pair<int, int> q1 = query(node * 2, index, st, mid);
    pair<int, int> q2 = query(node * 2 + 1, index, mid + 1, sp);

    return operation(operation(q1, q2), tree[node]);
}

int query_index(int index, int st, int sp)
{
    return query(1, index, st, sp).first;
}

void update(int node, int l, int r, int st, int sp, int val, int t)
{
    if (st > r || sp < l)
        return;
    if (st >= l && sp <= r)
    {
        tree[node] = {val, t};
    }
    else
    {
        int mid = st + (sp - st) / 2;
        update(node * 2, l, r, st, mid, val, t);
        update(node * 2 + 1, l, r, mid + 1, sp, val, t);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    segment_tree_init(n);

    for (int i = 1; i <= m; i++)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            int l, r, val;
            cin >> l >> r >> val;
            --r;
            update(1, l, r, 0, n - 1, val, i);
        }
        else
        {
            int index;
            cin >> index;
            cout << query_index(index, 0, n - 1) << "\n";
        }
    }

    return 0;
}
