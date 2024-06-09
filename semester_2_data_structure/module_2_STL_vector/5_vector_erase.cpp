#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 20, 32, 50, 45};

    v.erase(v.begin() + 2); // this will delete the 3rd index value

    for (int x : v)
        cout << x << " ";
    cout << endl;
    // insert another vector in a position
    v.erase(v.begin() + 1, v.begin() + 4); // this will delete the values from 1 to 3 index
    for (int x : v)
        cout << x << " ";

    return 0;
}