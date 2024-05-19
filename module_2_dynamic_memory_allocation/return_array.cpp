#include <iostream>
using namespace std;

int *func()
{
    int *a = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    return a; // returning array from function
}

int main()
{
    int *arr = func();
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}