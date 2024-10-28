#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int serejaCount = 0, dimaCount = 0, serejaSum = 0, dimaSum = 0;
    auto it1 = v.begin(), it2 = v.end() - 1;
    while (it1 <= it2)
    {
        if (serejaCount <= dimaCount)
        {
            if (*it1 > *it2)
            {
                serejaSum += *it1;
                serejaCount++;
                it1++;
            }
            else
            {
                serejaSum += *it2;
                serejaCount++;
                it2--;
            }
        }
        else
        {
            if (*it1 > *it2)
            {
                dimaSum += *it1;
                dimaCount++;
                it1++;
            }
            else
            {
                dimaSum += *it2;
                dimaCount++;
                it2--;
            }
        }
    }

    cout << serejaSum << " " << dimaSum << "\n";
    return 0;
}