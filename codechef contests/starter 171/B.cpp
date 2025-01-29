#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    string f = "ADVITIYA";

    while (t--)
    {
        string s;
        cin >> s;

        map<char, int> m;
        char x = 'A';
        for (int i = 1; i <= 26; i++)
        {
            m[x] = i;
            x++;
        }

        int steps = 0;
        for (int i = 0; i < s.size(); i++)
        {
            steps += (f[i] - s[i] + 26) % 26;
        }
        cout << steps << "\n";
    }
    return 0;
}
