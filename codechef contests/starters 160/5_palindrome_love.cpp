#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string &s)
{
    bool res = true;
    int n = s.size();
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - i - 1])
            res = false;
    }
    return res;
}

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
        if (n == 1)
        {
            cout << 0 << "\n";
        }
        else if (n == 2)
        {
            cout << (s[0] == s[1] ? 0 : -1) << "\n";
        }
        else if (s[0] != s[n - 1])
        {
            string f = s.substr(0, n - 1);
            string l = s.substr(1, n - 1);
            if (isPalindrome(f) && isPalindrome(l))
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << 1 << "\n";
            }
        }
        else
        {
            if (isPalindrome(s))
            {
                cout << 0 << "\n";
            }
            else
            {
                int l = 0, r = n - 1;
                while (l < r)
                {
                    if (s[l] != s[r])
                        break;
                    l++;
                    r--;
                }
                string p = s.substr(l, r - l + 1);
                if (isPalindrome(p))
                {
                    cout << -1 << "\n";
                }
                else
                {
                    cout << 1 << "\n";
                }
            }
        }
    }
    return 0;
}