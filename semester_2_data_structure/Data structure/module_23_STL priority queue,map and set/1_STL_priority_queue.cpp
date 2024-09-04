#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    priority_queue<int> pq; // max heap
    // priority_queue<int, vector<int>, greater<int>> pq; min heap
    while (1)
    {
        int c;
        cin >> c;
        if (c == 0)
        {
            int x;
            cin >> x;
            pq.push(x); // O(logn)
        }
        else if (c == 1)
        {
            pq.pop(); // O(logn)
        }
        else if (c == 2)
        {
            cout << pq.top() << endl; // O(1)
        }
        else
            break;
    }
    return 0;
}