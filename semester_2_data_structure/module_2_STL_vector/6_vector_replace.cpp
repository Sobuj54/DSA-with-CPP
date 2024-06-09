#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 20, 10, 20, 32, 50, 45};

    replace(v.begin(), v.end(), 10, 0); // this will replace all the 10 with 0

    for (int x : v)
        cout << x << " ";

    return 0;
}