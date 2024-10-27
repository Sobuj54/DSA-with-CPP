#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s;

    for (int i = 0; i < 4; i++)
    {
        if (n > 0)
        {
            s += (n % 10) + 48;
            n = n / 10;
        }
        else
        {
            s += '0';
        }
    }

    reverse(s.begin(), s.end());
    cout << s << "\n";
    return 0;
}