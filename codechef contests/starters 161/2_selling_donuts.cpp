#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            b[i] = --x;
        }

        int sad = 0;
        for (int i = 0; i < m; i++)
        {
            if (a[b[i]] != 0)
            {
                a[b[i]]--;
            }
            else
            {
                sad++;
            }
        }
        cout << sad << "\n";
    }
}
