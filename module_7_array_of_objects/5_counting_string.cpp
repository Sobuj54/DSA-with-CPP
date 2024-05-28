#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int count[26] = {0};
    for (char c : s)
    {
        count[c - 'a']++;
    }

    for (char i = 'a'; i < 'z'; i++)
    {
        for (int j = 0; j < count[i - 'a']; j++)
        {
            cout << i;
        }
    }
    return 0;
}