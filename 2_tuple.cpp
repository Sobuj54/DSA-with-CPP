#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // tuple lets us combine as many data types as we need
    tuple<string, int, int> t = {"Sobuj", 64, 80};
    // cout << get<0>(t) << " " << get<1>(t) << " " << get<1>(t) << "\n";

    // destructuring way of accessing tuple
    auto [name, roll, marks] = t;
    cout << name << " " << roll << " " << marks << "\n";

    // array of tuples
    int n;
    cin >> n;
    tuple<string, int, int> peoples[n];

    for (int i = 0; i < n; i++)
        cin >> get<0>(peoples[i]) >> get<1>(peoples[i]) >> get<2>(peoples[i]);

    for (auto [name, age, salary] : peoples)
        cout << name << " " << age << " " << salary << "\n";

    return 0;
}