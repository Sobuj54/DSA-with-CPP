#include <bits/stdc++.h>
using namespace std;

const int MAX_INDEX = 100005;
int tree[MAX_INDEX * 4];
int arr[MAX_INDEX];

void segment_tree_init(int node, int start, int end)
{
    if (start == end)
    {
        tree[node] = arr[start];
        return;
    }
    int left = node * 2;
    int right = node * 2 + 1;
    int mid = (start + end) / 2;
    segment_tree_init(left, start, mid);
    segment_tree_init(right, mid + 1, end);
    tree[node] = tree[left] + tree[right];
}

int segment_tree_query(int node, int start, int end, int q_start, int q_end)
{
    if (q_start > end || q_end < start)
    {
        return 0;
    }
    if (q_start <= start && q_end >= end)
    {
        return tree[node];
    }
    int left = node * 2;
    int right = node * 2 + 1;
    int mid = (start + end) / 2;
    int q1 = segment_tree_query(left, start, mid, q_start, q_end);
    int q2 = segment_tree_query(right, mid + 1, end, q_start, q_end);
    return q1 + q2;
}

void segment_tree_update(int node, int start, int end, int index, int new_value)
{
    if (index < start || index > end)
    {
        return;
    }
    if (start == end)
    {
        tree[node] += new_value;
        return;
    }
    int left = node * 2;
    int right = node * 2 + 1;
    int mid = (start + end) / 2;
    segment_tree_update(left, start, mid, index, new_value);
    segment_tree_update(right, mid + 1, end, index, new_value);
    tree[node] = tree[left] + tree[right];
}

void segment_tree_update_set_0(int node, int start, int end, int index)
{
    if (index < start || index > end)
    {
        return;
    }
    if (start == end)
    {
        tree[node] = 0;
        return;
    }
    int left = node * 2;
    int right = node * 2 + 1;
    int mid = (start + end) / 2;
    segment_tree_update_set_0(left, start, mid, index);
    segment_tree_update_set_0(right, mid + 1, end, index);
    tree[node] = tree[left] + tree[right];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q, t = 1;
    cin >> q;
    while (q--)
    {
        int n, query;
        cin >> n >> query;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        segment_tree_init(1, 1, n);

        cout << "Case " << t++ << ":\n";
        while (query--)
        {
            int d;
            cin >> d;
            if (d == 1)
            {
                int x;
                cin >> x;
                x++;
                cout << segment_tree_query(1, 1, n, x, x) << '\n';
                segment_tree_update_set_0(1, 1, n, x);
            }
            else if (d == 2)
            {
                int x, y;
                cin >> x >> y;
                x++;
                segment_tree_update(1, 1, n, x, y);
            }
            else
            {
                int x, y;
                cin >> x >> y;
                x++;
                y++;
                cout << segment_tree_query(1, 1, n, x, y) << '\n';
            }
        }
    }

    return 0;
}
