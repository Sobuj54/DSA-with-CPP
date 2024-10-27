#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    deque<int> dq(n);
    for (int i = 0; i < n; i++)
        cin >> dq[i];

    for (int val : dq)
        cout << val << " ";
    cout << "\n";

    dq.push_back(40);  // pushes 40 to the last
    dq.push_front(50); // pushes 50 to the front
    sort(dq.begin(),dq.end()); //ascending order sort
    for (int val : dq)
        cout << val << " ";
    cout << "\n";

    dq.pop_back();  // removes the last element
    dq.pop_front(); // removes the first element
    for (int val : dq)
        cout << val << " ";
    cout << "\n";

    cout << dq.front() << "\n"; // gets the first value
    cout << dq.back() << "\n";  // gets the last value

    
    return 0;
}