#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40};
    vector<int> v2 = {1, 2, 3, 4};

    v.insert(v.begin() + 2, 100); // first argument is pointer to the desired index and second is the value to be inserted

    // insert another vector in a position
    v.insert(v.begin() + 1, v2.begin(), v2.end()); // in 2nd index this will insert v2 vector
    for (int x : v)
        cout << x << " ";

    return 0;
}