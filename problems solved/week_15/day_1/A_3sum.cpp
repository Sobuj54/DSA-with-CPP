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
            mp[x % 10]++;
        }

        bool isPossible = false;
        for (int i = 0; i <= 9; i++)
        {
            for (int j = 0; j <= 9; j++)
            {
                for (int k = 0; k <= 9; k++)
                {
                    bool a = false, b = false, c = false;
                    if (mp[i])
                    {
                        a = true;
                        mp[i]--;
                    }
                    if (mp[j])
                    {
                        b = true;
                        mp[j]--;
                    }
                    if (mp[k])
                    {
                        c = true;
                        mp[k]--;
                    }
                    if (a && b && c)
                    {
                        int sum = i + j + k;
                        if (sum % 10 == 3)
                        {
                            isPossible = true;
                            break;
                        }
                    }
                    if (a)
                        mp[i]++;
                    if (b)
                        mp[j]++;
                    if (c)
                        mp[k]++;
                }
            }
        }

        cout << (isPossible ? "yes\n" : "no\n");
    }
    return 0;
}