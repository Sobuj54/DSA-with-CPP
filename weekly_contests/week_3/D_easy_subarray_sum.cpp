#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        int startPos = -1, endPos = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (startPos == -1 && v[i] > 0)
            {
                startPos = i;
            }
            else if (v[i] > 0)
            {
                endPos = i;
            }
        }

        if (startPos == -1)
        {
            cout << 0 << "\n";
        }
        else
        {
            int op = 0;
            for (int i = startPos; i <= endPos; i++)
            {
                if (v[i] < 0)
                {
                    op++;
                }
            }
            cout << op << "\n";
        }
    }
    return 0;
}