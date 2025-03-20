#include <bits/stdc++.h>
using namespace std;

char s[100050];
int seg[400050];

void update(int at, int L, int R, int l, int r)
{
    if (L > r || R < l)
        return;
    if (L >= l && R <= r)
    {
        seg[at]++;
        return;
    }
    int mid = (L + R) / 2;
    update(2 * at, L, mid, l, r);
    update(2 * at + 1, mid + 1, R, l, r);
}

int query(int at, int L, int R, int pos, int carry = 0)
{
    carry += seg[at];

    if (L == R)
    {
        return (carry % 2 == 0) ? (s[L] - '0') : (1 - (s[L] - '0'));
    }

    int mid = (L + R) / 2;
    if (pos <= mid)
    {
        return query(2 * at, L, mid, pos, carry);
    }
    else
    {
        return query(2 * at + 1, mid + 1, R, pos, carry);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc, k = 0, q, a, b, pos;
    char ch;

    cin >> tc;
    while (tc--)
    {
        cin >> s;
        int len = strlen(s);
        fill(seg, seg + len * 4, 0);
        cin >> q;
        cout << "Case " << ++k << ":\n";
        while (q--)
        {
            cin >> ch;
            if (ch == 'I')
            {
                cin >> a >> b;
                update(1, 0, len - 1, a - 1, b - 1);
            }
            else if (ch == 'Q')
            {
                cin >> pos;
                cout << query(1, 0, len - 1, pos - 1) << "\n";
            }
        }
    }

    return 0;
}
