#include <bits/stdc++.h>
using namespace std;

bool isPalindrom(string &s)
{
    int n = s.size();
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - i - 1])
            return false;
    }
    return true;
}

bool isPossible(string &a, string &b)
{
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        if (a[n - i - 1] != b[i])
            return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<string> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<string> f, s, mid;
    for (int i = 0; i < n; i++)
    {
        if (isPalindrom(a[i]))
            mid.push_back(a[i]);
        else
        {
            for (int j = i + 1; j < n; j++)
            {
                if (isPossible(a[i], a[j]))
                {
                    f.push_back(a[i]);
                    s.push_back(a[j]);
                }
            }
        }
    }

    string total;
    for (auto str : f)
        total += str;

    if (mid.size() != 0)
        total += mid[0];

    reverse(s.begin(), s.end());
    for (auto str : s)
        total += str;

    cout << total.size() << "\n";
    if (total.size() != 0)
        cout << total << "\n";

    return 0;
}