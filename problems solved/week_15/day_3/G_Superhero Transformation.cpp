#include <bits/stdc++.h>
using namespace std;

vector<char> a = {'a', 'e', 'i', 'o', 'u'};
bool isVowel(char c)
{
    bool vowel = false;
    for (auto ch : a)
    {
        if (c == ch)
            vowel = true;
    }
    return vowel;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, t;
    cin >> s >> t;
    if (s.size() != t.size())
    {
        cout << "NO\n";
    }
    else
    {
        bool canTransfrom = true;
        for (int i = 0; i < s.size(); i++)
        {
            if (isVowel(s[i]) != isVowel(t[i]))
                canTransfrom = false;
        }
        cout << (canTransfrom ? "YES\n" : "NO\n");
    }
    return 0;
}