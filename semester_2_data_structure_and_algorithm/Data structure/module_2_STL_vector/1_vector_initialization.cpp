#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v; int type vector v(this v is a dynamic array) and size is 0
    // vector<int> v(5); this vector is initialized with size 5
    // vector<int> v(5, 10); this vectors size is 5 and all the index has value of 10

    // vector<int> v2(5, 10);
    // vector<int> v(v2); // here vector v2 is copied into vector v

    // int arr[5] = {10, 20, 30, 40, 50};
    // vector<int> v(arr, arr + 5); // here arr is copied into vector v

    vector<int> v = {10, 20, 30}; // initializing value directly

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << "\nsize: " << v.size();
    return 0;
}