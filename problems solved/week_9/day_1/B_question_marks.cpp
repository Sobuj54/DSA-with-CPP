#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        vector<char> v = {'A', 'B', 'C', 'D'};
        cin >> s;

        int result = 0;
        for (char c : v)
        {
            result += min(n, (int)count(s.begin(), s.end(), c));
        }

        cout << result << "\n";
    }

    return 0;
}
