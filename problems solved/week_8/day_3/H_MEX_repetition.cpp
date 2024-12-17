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
        int n, k;
        cin >> n >> k;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int b;
            cin >> b;
            v.push_back(b);
        }

        vector<int> t = v;
        sort(t.begin(), t.end());
        int missed = n;
        for (int i = 0; i < n; i++)
        {
            if (t[i] != i)
            {
                missed = i;
                break;
            }
        }

        int bkp;
        for (int i = 0; i < n; i++)
        {
            bkp = v[i];
            v[i] = missed;
            missed = bkp;
        }
        v.push_back(missed);

        int last = (k - 1) % (n + 1);
        for (int i = (n + 1 - last); i < (n + 1); i++)
        {
            cout << v[i] << " ";
        }

        for (int i = 0; i < (n - last); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}