#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> arr(m);
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }

    int p;
    cin >> p;

    int count = 0;
    for (int i = 0; i < m; i++)
    {
        int temp = p ^ arr[i];
        int temp_count = 0;

        while (temp > 0)
        {
            if (temp & 1)
            {
                temp_count++;
                if (temp_count > k)
                {
                    break;
                }
            }
            temp >>= 1;
        }

        if (temp_count <= k)
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}