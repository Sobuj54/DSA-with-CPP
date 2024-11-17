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
        string s;
        cin >> s;

        vector<int> v, v2;
        int l = 0, r = 0, cnt1 = 0;
        while (r < n)
        {
            if (s[n - 1] == '1')
                v.push_back(1);
            if (s[r] == '1' && s[l] == s[r])
            {
                cnt1++;
                r++;
            }
            else
            {
                if (cnt1 != 0)
                    v.push_back(cnt1);
                cnt1 = 0;
                r++;
                l = r;
            }
        }

        l = 0, r = 0, cnt1 = 0;
        while (r < n)
        {
            if (s[n - 1] == '0')
                v2.push_back(1);
            if (s[r] == '0' && s[l] == s[r])
            {
                cnt1++;
                r++;
            }
            else
            {
                if (cnt1 != 0)
                    v2.push_back(cnt1);
                cnt1 = 0;
                r++;
                l = r;
            }
        }

        cout << min(v.size(), v2.size()) << "\n";
    }
    return 0;
}