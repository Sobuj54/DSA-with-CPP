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
        string s;
        cin >> s;
        int cnt[2] = {0};
        for (char ch : s)
        {
            cnt[ch - '0']++;
        }
        for (int i = 0; i <= s.length(); i++)
        {
            if (i == s.length() || cnt[1 - (s[i] - '0')] == 0)
            {
                cout << s.length() - i << endl;
                break;
            }
            cnt[1 - (s[i] - '0')]--;
        }
    }
    return 0;
}