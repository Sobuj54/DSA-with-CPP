#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> myList = {20, 50, 50, 50, 23, 12, 10, 24};
    myList.sort();
    // myList.sort(greater<int>()); sorts in descending order

    for (int val : myList)
    {
        cout << val << " ";
    }
    cout << endl;
    // myList.remove(50); // will remove all the 50 from the list
    myList.unique();  // this removes all the duplicate values
    myList.reverse(); // reverses the list
    for (int val : myList)
    {
        cout << val << " ";
    }
    return 0;
}