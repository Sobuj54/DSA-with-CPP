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
        char c;
        cin >> c;
        string s;
        cin >> s;
        s += s;

        int mx = 0, cnt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == c)
            {
                cnt = 0;
                while (s[i] != 'g' && i < s.size())
                {
                    cnt++;
                    i++;
                }
                if (cnt > mx)
                {
                    mx = cnt;
                }
            }
        }
        cout << mx << "\n";
    }
    return 0;
}