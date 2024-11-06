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
        int n, x;
        cin >> n >> x;
        vector<int> A(n), B(n), v;
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> B[i];
        }

        int winsA = 0;
        for (int i = 0; i < n; i++)
        {
            if (A[i] > B[i])
            {
                winsA++;
            }
            else if (A[i] < B[i])
            {
                v.push_back((B[i] - A[i]) + 1);
            }
            else
            {
                v.push_back(0);
            }
        }

        if (winsA > n / 2)
        {
            cout << "yes" << "\n";
        }
        else
        {
            sort(v.begin(), v.end());
            for (auto val : v)
            {
                if (x <= 0)
                    break;

                if (val == 0)
                {
                    winsA++;
                    x--;
                }
                else
                {
                    if (val <= x)
                    {
                        winsA++;
                        x -= val;
                    }
                }
            }

            if (winsA > n / 2)
                cout << "yes" << "\n";
            else
                cout << "no" << "\n";
        }
    }
    return 0;
}
