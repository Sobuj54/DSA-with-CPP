#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, P1, P2, P3, T1, T2;
    cin >> n >> P1 >> P2 >> P3 >> T1 >> T2;

    vector<pair<int, int> > periods(n);
    for (int i = 0; i < n; i++)
    {
        cin >> periods[i].first >> periods[i].second;
    }

    int total_power = 0;
    for (int i = 0; i < n; i++)
    {
        int active_time = periods[i].second - periods[i].first;
        total_power += active_time * P1;

        if (i < n - 1)
        {
            int idle_time = periods[i + 1].first - periods[i].second;

            if (idle_time <= T1)
            {
                total_power += idle_time * P1;
            }
            else if (idle_time <= T1 + T2)
            {
                total_power += T1 * P1 + (idle_time - T1) * P2;
            }
            else
            {
                total_power += T1 * P1 + T2 * P2 + (idle_time - T1 - T2) * P3;
            }
        }
    }

    cout << total_power << "\n";
    return 0;
}
