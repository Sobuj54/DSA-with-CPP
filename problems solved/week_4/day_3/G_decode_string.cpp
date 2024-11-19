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
        string s, result;
        cin >> s;

        int l = n - 1;
        while (l >= 0)
        {
            if (s[l] == '0')
            {
                int num = (s[l - 2] - '0') * 10 + (s[l - 1] - '0');
                result += ('a' + num - 1);
                l -= 3;
            }
            else
            {
                int num = s[l] - '0';
                result += ('a' + num - 1);
                l--;
            }
        }

        reverse(result.begin(), result.end());
        cout << result << "\n";
    }

    return 0;
}
