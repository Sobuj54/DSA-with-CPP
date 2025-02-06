#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    pbds<int> p;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        p.insert(x);
    }
    for (auto val : p)
        cout << val << ' ';
    cout << "\n";

    int x = p.order_of_key(5); // counts number of values smaller
    cout << "order of key: " << x << "\n";

    auto it = p.find_by_order(3); // this gives iterator of the index 3
    cout << "find by order: " << *it << "\n";
    return 0;
}