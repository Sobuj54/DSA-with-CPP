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
        string first, second;
        cin >> first >> second;

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if ((first[i] == second[i]))
            {
                count++;
            }
            else if ((first[i] == 'G' && second[i] == 'B') || (first[i] == 'B' && second[i] == 'G'))
            {
                count++;
            }
        }

        cout << (count == n ? "yes" : "no") << "\n";
    }
    return 0;
}