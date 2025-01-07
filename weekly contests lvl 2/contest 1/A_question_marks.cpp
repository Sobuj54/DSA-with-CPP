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
        map<char, int> cnt;

        for (auto c : s)
        {
            if (c != '?')
                cnt[c]++;
        }

        int totalMarks = 0;
        for (auto [y, x] : cnt)
        {
            if (x > n)
                totalMarks += n;
            else
                totalMarks += x;
        }
        cout << totalMarks << "\n";
    }
    return 0;
}