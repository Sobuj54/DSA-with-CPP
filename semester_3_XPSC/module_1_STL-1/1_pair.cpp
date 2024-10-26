#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    pair<string, int> student = {"Sobuj", 64};
    // cout << student.first << " " << student.second << "\n";

    // destructuring
    auto [name, roll] = student;
    cout << name << " " << roll << "\n";

    // array of pairs
    int n;
    cin >> n;
    pair<string, int> students[n];
    for (int i = 0; i < n; i++)
    {
        cin >> students[i].first >> students[i].second;
    }

    for (auto [name, marks] : students)
        cout << name << " " << marks << "\n";

    return 0;
}