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
        int n, k;
        cin >> n >> k;
        string s = "abcdefghijklmnopqrstuvwxyz";
        string sub = s.substr(0, k);
        for (int i = 0; i < n; i++)
            cout << sub;
        cout << endl;
    }
    return 0;
}