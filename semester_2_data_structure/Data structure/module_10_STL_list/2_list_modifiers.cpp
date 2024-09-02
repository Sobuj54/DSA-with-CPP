#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
    list<int> initialized = {10, 20, 30, 40, 50, 50, 50, 50}; // initializing the list
    list<int> myList(initialized);
    list<int> newList = {200, 300, 400, 500};

    // myList.push_back(500);
    // myList.push_front(1);
    // myList.pop_back();
    // myList.pop_front();

    myList.insert(next(myList.begin(), 2), 200);                            // inserts 200 at index 2
    myList.insert(next(myList.begin(), 4), newList.begin(), newList.end()); // inserts the while newList list at index 4

    for (int val : myList)
    {
        cout << val << " ";
    }
    cout << endl;

    myList.erase(next(myList.begin(), 3));                          // deletes 3rd node
    myList.erase(next(myList.begin(), 3), next(myList.begin(), 6)); // deletes all the nodes from 3rd index to (6-1)th index

    replace(myList.begin(), myList.end(), 50, 0); // will replace all the 50 with 0

    for (int val : myList)
    {
        cout << val << " ";
    }

    auto it = find(myList.begin(), myList.end(), 10);
    if (it == myList.end())
        cout << "NO match found.";
    else
        cout << "match found";
    return 0;
}