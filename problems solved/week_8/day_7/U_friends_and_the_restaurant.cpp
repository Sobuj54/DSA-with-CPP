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
        vector<int> x(n), y(n);
        vector<pair<int, int> > dif(n);

        for (int i = 0; i < n; i++)
            cin >> x[i];
        for (int i = 0; i < n; i++)
            cin >> y[i];

        for (int i = 0; i < n; i++)
        {
            dif[i].first = y[i] - x[i];
            dif[i].second = i;
        }
        sort(dif.begin(), dif.end());
        reverse(dif.begin(), dif.end());

        int j = n - 1, cnt = 0;

        for (int i = 0; i < n; i++)
        {
            while (j > i && dif[i].first + dif[j].first < 0)
                j--;
            if (j <= i)
                break;
            cnt++;
            j--;
        }
        cout << cnt << endl;
    }
    return 0;
}