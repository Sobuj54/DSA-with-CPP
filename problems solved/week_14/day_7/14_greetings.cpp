#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> a(n);
        long long ans;
        ordered_set st;

        for (int i = 0; i < n; i++)
            cin >> a[i].second >> a[i].first;

        sort(a.begin(), a.end());

        ans = 0;
        st.clear();
        for (auto p : a)
        {
            ans += st.size() - st.order_of_key(p.second);
            st.insert(p.second);
        }

        cout << ans << "\n";
    }
}