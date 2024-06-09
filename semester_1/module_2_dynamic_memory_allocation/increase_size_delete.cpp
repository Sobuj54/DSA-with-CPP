#include <iostream>
using namespace std;

int main()
{

    // deleting dynamic memory variables
    int *p = new int;
    *p = 20;
    cout << *p << endl;
    delete p; // deleting dynamic memory

    // deleting dynamic memory of array and increasing array size
    int *arr = new int[3];
    int *arr1 = new int[3];

    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
        arr1[i] = arr[i];
    }

    delete[] arr; // deleting dynamic heap memory but arr pointer remains
    arr = new int[5];

    for (int i = 0; i < 3; i++)
    {
        arr[i] = arr1[i];
    }
    delete[] arr1;

    arr[3] = 200;
    arr[4] = 500;

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}