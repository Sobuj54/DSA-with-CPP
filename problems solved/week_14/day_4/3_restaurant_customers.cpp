#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> arrival(n), departure(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arrival[i] >> departure[i];
    }

    sort(arrival.begin(), arrival.end());
    sort(departure.begin(), departure.end());

    int max_customers = 0, current_customers = 0;
    int i = 0, j = 0;

    while (i < n)
    {
        if (arrival[i] < departure[j])
        {
            current_customers++;
            i++;
        }
        else
        {
            current_customers--;
            j++;
        }
        max_customers = max(max_customers, current_customers);
    }

    cout << max_customers << "\n";
    return 0;
}
