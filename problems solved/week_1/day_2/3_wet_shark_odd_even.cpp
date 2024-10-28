#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    ll oddSum = 0, evenSum = 0;
    int minOdd = INT_MAX, oddCount = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a % 2 == 0)
        {
            evenSum += a;
        }
        else
        {
            oddSum += a;
            oddCount++;
            minOdd = min(minOdd, a);
        }
    }

    if (oddCount % 2 != 0)
    {
        oddSum = oddSum - minOdd;
    }

    cout << oddSum + evenSum << "\n";
    return 0;
}