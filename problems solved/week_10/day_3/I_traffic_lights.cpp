#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, n;
    cin >> x >> n;
    vector<int> positions(n);
    for (int i = 0; i < n; i++)
    {
        cin >> positions[i];
    }

    set<int> lights;
    multiset<int> segments;

    lights.insert(0);
    lights.insert(x);
    segments.insert(x);
    for (int p : positions)
    {
        auto it = lights.upper_bound(p);
        int r = *it;
        int l = *(--it);

        segments.erase(segments.find(r - l));

        segments.insert(p - l);
        segments.insert(r - p);

        lights.insert(p);
        cout << *segments.rbegin() << " ";
    }

    cout << endl;
    return 0;
}