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
        int arr[n];
        map<int, int> m;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (m[arr[i]] == 0)
                v.push_back(arr[i]);
            m[arr[i]]++;
        }

        int c = 0;
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++)
        {
            while (m[v[i]] > 0)
            {
                c++;
                m[v[i]]--;
                int x = v[i];
                while (m[++x] > 0)
                {
                    m[x]--;
                }
            }
        }
        cout << c << endl;
    }
    return 0;
}