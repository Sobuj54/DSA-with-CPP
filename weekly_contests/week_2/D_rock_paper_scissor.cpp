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
        int n, chef = 0, chefina = 0, losses = 0;
        cin >> n;
        string a, b;
        cin >> a >> b;

        for (int i = 0; i < n; i++)
        {
            if ((a[i] == 'R' && b[i] == 'S') || (a[i] == 'P' && b[i] == 'R') || (a[i] == 'S' && b[i] == 'P'))
            {
                chef++;
            }
            else if ((b[i] == 'R' && a[i] == 'S') || (b[i] == 'P' && a[i] == 'R') || (b[i] == 'S' && a[i] == 'P'))
            {
                chefina++;
                losses++;
            }
        }

        if (chef > chefina)
        {
            cout << 0 << "\n";
        }
        else if (chef == chefina)
        {
            cout << 1 << "\n";
        }
        else
        {
            int equalize = 0;
            for (int i = 0; i < losses; i++)
            {
                if (chef > chefina)
                    break;
                chef++;
                chefina--;
                equalize++;
            }
            cout << equalize << "\n";
        }
    }
    return 0;
}