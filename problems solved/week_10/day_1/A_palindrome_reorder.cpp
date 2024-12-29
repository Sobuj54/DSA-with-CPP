#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    map<char, int> freq;
    for (auto c : s)
    {
        freq[c]++;
    }

    int oddCount = 0, evenCount = 0;
    for (auto [x, y] : freq)
    {
        if (y % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    if (oddCount > 1)
    {
        cout << "NO SOLUTION\n";
    }
    else
    {
        string firstHalf, secondHalf, midHalf;
        for (auto [x, y] : freq)
        {
            if (y % 2 == 0)
            {
                for (int i = 0; i < y / 2; i++)
                {
                    firstHalf += x;
                }
            }
            else
            {
                for (int i = 0; i < y; i++)
                {
                    midHalf += x;
                }
            }
        }
        secondHalf = firstHalf;
        reverse(secondHalf.begin(), secondHalf.end());

        if (oddCount == 1)
        {
            cout << firstHalf + midHalf + secondHalf << "\n";
        }
        else
        {
            cout << firstHalf + secondHalf << "\n";
        }
    }
    return 0;
}