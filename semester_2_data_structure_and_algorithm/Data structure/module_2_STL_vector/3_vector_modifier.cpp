#include <bits/stdc++.h>
using namespace std;

int main()
{
    // capacity increases in 2x way when the maximum capacity is reached

    vector<int> v = {10, 20, 30, 40};
    vector<int> v2 = {1, 2, 3, 4};
    v2 = v; // is both vectors are same size the complexity is O(1) otherwise O(n)
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    return 0;
}