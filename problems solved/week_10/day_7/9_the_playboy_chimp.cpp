#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (cin >> n)
    {
        vector<int> chimps;
        int h;
        for (int i = 0; i < n; ++i)
        {
            cin >> h;
            chimps.push_back(h);
        }
        chimps.erase(unique(chimps.begin(), chimps.end()), chimps.end());

        int q;
        cin >> q;
        while (q--)
        {
            cin >> h;
            if (h <= chimps.front())
                cout << "X ";
            else
                cout << *(--lower_bound(chimps.begin(), chimps.end(), h)) << " ";
            if (h >= chimps.back())
                cout << "X\n";
            else
                cout << *upper_bound(chimps.begin(), chimps.end(), h) << "\n";
        }
    }
    return 0;
}