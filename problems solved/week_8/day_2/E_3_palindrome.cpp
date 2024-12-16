#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string repeated = "aabb";
    for (int i = 0; i < n; ++i)
    {
        cout << repeated[i % 4];
    }
    cout << endl;

    return 0;
}