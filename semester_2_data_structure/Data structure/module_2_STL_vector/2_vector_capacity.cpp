#include <bits/stdc++.h>
using namespace std;

int main()
{
    // capacity increases in 2x way when the maximum capacity is reached

    vector<int> v;
    cout << "capacity: " << v.capacity() << endl; // capacity: 0
    v.push_back(10);
    cout << "capacity: " << v.capacity() << endl; // capacity: 1
    v.push_back(20);
    cout << "capacity: " << v.capacity() << endl; // capacity: 2
    v.push_back(30);
    cout << "capacity: " << v.capacity() << endl; // capacity: 4
    v.push_back(40);
    cout << "capacity: " << v.capacity() << endl; // capacity: 4
    v.push_back(50);
    cout << "capacity: " << v.capacity() << endl; // capacity: 8
    return 0;
}