#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    map<char, int> freq;
    for (int i = 0; i < 26; i++)
    {
        freq.insert({97 + i, 0});
    }

    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i]]++;
    }

    string notOccurred;
    for (int i = 0; i < 26; i++)
    {
        if (freq[97 + i] == 0)
        {
            notOccurred += 97 + i;
            break;
        }
    }
    if (!notOccurred.empty())
        cout << notOccurred << "\n";
    else
        cout << "None" << "\n";

    return 0;
}