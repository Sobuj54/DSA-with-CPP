#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, amount = 0;
    cin >> n;

    vector<bool> prime(n + 1, false);
    vector<int> cnt(n + 1, 0);

    for (int i = 2; i <= n; ++i)
    {
        if (!prime[i])
        {
            for (int j = i + i; j <= n; j += i)
            {
                prime[j] = true;
                cnt[j] += 1;
            }
        }

        if (cnt[i] == 2)
        {
            amount += 1;
        }
    }

    cout << amount << endl;
    return 0;
}
