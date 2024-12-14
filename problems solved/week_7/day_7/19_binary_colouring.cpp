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
        int x;
        cin >> x;
        vector<int> v;
        while (x)
        {
            if (x % 2 == 0)
                v.push_back(0);
            else
                v.push_back(1);
            x = x / 2;
        }

        v.push_back(0);

        for (int i = 0; i < v.size() - 1; ++i)
        {
            if (v[i] == 1 && v[i + 1] == 1)
            {
                for (int j = i; j < v.size(); ++j)
                {
                    if (v[j] == 0)
                    {
                        v[j] = 1;
                        v[i] = -1;
                        break;
                    }
                    else
                    {
                        v[j] = 0;
                    }
                }
            }
        }

        cout << v.size() << endl;
        for (int i = 0; i < v.size(); ++i)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}