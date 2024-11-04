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
        int x, count = 0;
        ;
        cin >> x;
        for (int i = 0; i < x; i++)
        {
            if (x >= 2 + (7 * i))
            {
                count++;
            }
            else
            {
                break;
            }
        }
        cout << count << "\n";
    }
    return 0;
}