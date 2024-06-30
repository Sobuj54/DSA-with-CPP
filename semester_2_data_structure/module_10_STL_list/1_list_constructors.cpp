#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> initialized = {10, 20, 30, 40, 50}; // initializing the list
    list<int> myList(initialized);                // copy the list
    cout << myList.front() << endl;               // this will print the first value
    cout << "size of the list: " << myList.size() << endl;

    // copy an array to a list
    int arr[5] = {10, 30, 20, 40, 100};
    list<int> copiedArr(arr, arr + 5);

    // iterate over the list
    for (auto it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    // iterate using range based for loop
    for (int val : copiedArr)
    {
        cout << val << " ";
    }
    return 0;
}