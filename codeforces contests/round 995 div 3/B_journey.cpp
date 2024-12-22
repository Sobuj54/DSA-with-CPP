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
        int n, a, b, c;
        cin >> n >> a >> b >> c;

        if (n >= (a + b + c))
        {
            int res = n / (a + b + c);
            int rem = n % (a + b + c);
            int day = 0;
            while (rem > 0)
            {
                if (rem > 0)
                {
                    rem -= a;
                    day++;
                }
                if (rem > 0)
                {
                    rem -= b;
                    day++;
                }
                if (rem > 0)
                {
                    rem -= c;
                    day++;
                }
            }
            cout << (res * 3) + day << "\n";
        }
        else
        {
            int day = 1, sum = a;
            if (sum < n)
            {
                sum += b;
                day++;
            }
            if (sum < n)
            {
                sum += c;
                day++;
            }
            cout << day << "\n";
        }
    }
    return 0;
}