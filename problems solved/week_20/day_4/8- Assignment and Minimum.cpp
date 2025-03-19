#include <bits/stdc++.h>
using namespace std;

struct segtree
{
    struct node
    {
        long long modify;
        long long value;
    };

    const long long NO_OP = LLONG_MIN;
    const long long EMPTY = LLONG_MAX;

    int seg_size;
    vector<node> tree;

    long long _modify(long long a, long long b, long long len)
    {
        return b;
    }

    long long _get(long long a, long long b)
    {
        return min(a, b);
    }

    void build(int n)
    {
        seg_size = 1;
        while (seg_size < n)
            seg_size *= 2;
        tree.assign(2 * seg_size, {0, 0});
    }

    void propagate(int x, int lx, int rx)
    {
        if (tree[x].modify == NO_OP || rx == lx + 1)
            return;
        int m = (lx + rx) / 2;
        tree[2 * x + 1].modify = _modify(tree[2 * x + 1].modify, tree[x].modify, 1);
        tree[2 * x + 1].value = _modify(tree[2 * x + 1].value, tree[x].modify, m - lx);
        tree[2 * x + 2].modify = _modify(tree[2 * x + 2].modify, tree[x].modify, 1);
        tree[2 * x + 2].value = _modify(tree[2 * x + 2].value, tree[x].modify, rx - m);
        tree[x].modify = NO_OP;
    }

    void update(int l, int r, int v)
    {
        update(l, r, v, 0, 0, seg_size);
    }

    void update(int l, int r, int v, int x, int lx, int rx)
    {
        propagate(x, lx, rx);
        if (lx >= r || rx <= l)
            return;
        if (lx >= l && rx <= r)
        {
            tree[x].modify = _modify(tree[x].modify, v, 1);
            tree[x].value = _modify(tree[x].value, v, rx - lx);
        }
        else
        {
            int m = (lx + rx) / 2;
            update(l, r, v, 2 * x + 1, lx, m);
            update(l, r, v, 2 * x + 2, m, rx);
            tree[x].value = _get(tree[2 * x + 1].value, tree[2 * x + 2].value);
        }
    }

    long long get(int l, int r)
    {
        return get(l, r, 0, 0, seg_size);
    }

    long long get(int l, int r, int x, int lx, int rx)
    {
        propagate(x, lx, rx);
        if (lx >= r || rx <= l)
            return EMPTY;
        if (lx >= l && rx <= r)
        {
            return tree[x].value;
        }
        else
        {
            int m = (lx + rx) / 2;
            long long v1 = get(l, r, 2 * x + 1, lx, m);
            long long v2 = get(l, r, 2 * x + 2, m, rx);
            return _get(v1, v2);
        }
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    segtree st;
    st.build(n);

    int cmd, l, r, v;
    while (m--)
    {
        cin >> cmd;
        if (cmd == 1)
        {
            cin >> l >> r >> v;
            st.update(l, r, v);
        }
        else
        {
            cin >> l >> r;
            cout << st.get(l, r) << "\n";
        }
    }

    return 0;
}
