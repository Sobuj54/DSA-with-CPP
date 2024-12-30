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
        string s, t;
        cin >> s >> t;

        if (s[0] == '1')
        {
            cout << "yes\n";
        }
        else
        {
            int notPossibleIdx = -1, firstOne = -1;
            for (int i = 0; i < n; i++)
            {
                if (notPossibleIdx == -1 && firstOne == -1 && s[i] == '0' && t[i] == '1')
                {
                    notPossibleIdx = i;
                    break;
                }
                if (notPossibleIdx == -1 && firstOne == -1 && s[i] == '1')
                {
                    firstOne = i;
                    break;
                }
            }

            if (notPossibleIdx != -1)
            {
                cout << "no\n";
            }
            else
            {
                cout << "yes\n";
            }
        }
    }
    return 0;
}