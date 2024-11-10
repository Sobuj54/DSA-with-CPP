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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }

        if (mp.size() == 1)
        {
            cout << "yes" << "\n";
        }
        else
        {
            if (mp.size() == 2 && mp.find(0) != mp.end())
            {
                cout << "yes" << "\n";
            }
            else
            {
                cout << "no" << "\n";
            }
        }
    }
    return 0;
}