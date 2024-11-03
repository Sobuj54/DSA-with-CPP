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
        vector<int> sequence(n);
        for (int i = 0; i < n; i++)
        {
            cin >> sequence[i];
        }

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            while (a--)
            {
                char c;
                cin >> c;
                if (c == 'U')
                {
                    int x = sequence[i];
                    sequence[i] = (x == 0 ? 9 : x - 1);
                }
                else
                {
                    int x = sequence[i];
                    sequence[i] = (x == 9 ? 0 : x + 1);
                }
            }
        }

        for (int val : sequence)
            cout << val << " ";

        cout << "\n";
    }
    return 0;
}
