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
        int matchIndex = -1;
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                matchIndex = i + 1;
                break;
            }
        }

        if (matchIndex != -1)
        {
            if (s[matchIndex] == 'z')
            {
                s.insert(s.begin() + matchIndex, 'a');
            }
            else
            {
                char c = s[matchIndex] + 1;
                s.insert(s.begin() + matchIndex, c);
            }
        }
        else
        {
            char lastChar = s[s.size() - 1];
            char c = lastChar + 1;
            if (lastChar == 'z')
                s += 'a';
            else
                s += c;
        }
        cout << s << "\n";
    }
    return 0;
}