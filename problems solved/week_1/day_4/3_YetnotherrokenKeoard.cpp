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
        stack<int> lastCap, lastSmall;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'b')
            {
                if (!lastSmall.empty())
                {
                    s[lastSmall.top()] = '0';
                    s[i] = '0';
                    lastSmall.pop();
                }
                else
                {
                    s[i] = '0';
                }
            }
            else if (s[i] == 'B')
            {
                if (!lastCap.empty())
                {
                    s[lastCap.top()] = '0';
                    s[i] = '0';
                    lastCap.pop();
                }
                else
                {
                    s[i] = '0';
                }
            }
            else
            {
                if (s[i] >= 'A' && s[i] <= 'Z')
                    lastCap.push(i);
                else
                    lastSmall.push(i);
            }
        }

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != '0')
                cout << s[i];
        }
        cout << "\n";
    }
    return 0;
}