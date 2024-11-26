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
        string s;
        cin >> s;
        string t = s;
        reverse(t.begin(), t.end());
        cout << min(s, t + s) << "\n";
    }
    return 0;
}