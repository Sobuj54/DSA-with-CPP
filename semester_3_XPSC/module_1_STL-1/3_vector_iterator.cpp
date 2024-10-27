#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << "\n";

    // reverse iterators to print values in reverse
    for (auto it = v.rbegin(); it != v.rend(); it++)
    {
        cout << *it << " ";
    }
    cout << "\n";

    // reverse function
    reverse(v.begin(), v.end());
    for (int val : v)
        cout << val << ' ';

    cout << "\n";

    // sort function
    sort(v.begin(), v.end());                 // ascending order
    sort(v.begin(), v.end(), greater<int>()); // descending order
    sort(v.rbegin(), v.rend());               // descending order
    for (int val : v)
        cout << val << ' ';

    // finding max and min element in an array
    auto mx = max_element(v.begin(), v.end());
    cout << *mx << "\n";
    auto min = min_element(v.begin(), v.end());
    cout << *min << "\n";
    
    // finding index 
    cout<<"index of max element: "<<mx - v.begin()<<"\n";
    cout<<"index of max element: "<<min - v.begin()<<"\n";
    return 0;
}