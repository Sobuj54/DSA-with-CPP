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
        int shelves, bottles;
        cin >> shelves >> bottles;
        map<int, int> mp;
        for (int i = 0; i < bottles; i++)
        {
            int brand, cost;
            cin >> brand >> cost;
            mp[brand] += cost;
        }

        vector<int> v;
        for (auto [brand, cost] : mp)
        {
            v.push_back(cost);
        }
        sort(v.rbegin(), v.rend());

        int totalCost = 0;
        if (v.size() <= shelves)
        {

            for (int i = 0; i < v.size(); i++)
                totalCost += v[i];
        }
        else
        {
            for (int i = 0; i < shelves; i++)
                totalCost += v[i];
        }

        cout << totalCost << "\n";
    }
    return 0;
}