#include <bits/stdc++.h>
using namespace std;

class Frequency
{
public:
    char value;
    int count;
};

bool cmp(Frequency a, Frequency b)
{
    if (a.count == b.count)
        return a.value < b.value;
    else
        return a.count > b.count;
}

int main()
{
    string s;
    cin >> s;
    Frequency f[26];
    for (int i = 0; i < 26; i++)
    {
        f[i].value = i + 'a';
        f[i].count = 0;
    }
    for (char c : s)
    {
        f[c - 'a'].count++;
    }

    for (char i = 'a'; i < 'z'; i++)
    {
        if (f[i - 'a'].count != 0)
            cout << f[i - 'a'].value << " " << f[i - 'a'].count << endl;
    }
    cout << endl;

    // sort f[] descending order based on f[].count
    sort(f, f + 26, cmp);

    // print characters with counts in descending order
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < f[i].count; j++)
        {
            cout << f[i].value;
        }
    }
    return 0;
}