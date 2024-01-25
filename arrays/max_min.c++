#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    cout << "enter array elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }

    int maxNum = INT_MIN; // INT_MIN gives us smallest integer value possible
    int minNum = INT_MAX; // INT_max gives us largest integer value possible
    for (int i = 0; i < n; i++)
    {
        // if (arr[i] > maxNum)
        // {
        //     maxNum = arr[i];
        // }
        // if (arr[i] < minNum)
        // {
        //     minNum = arr[i];
        // }
        // same thing using built in functions
        maxNum = max(maxNum, arr[i]); // max is a built in function that returns maximum value
        minNum = min(minNum, arr[i]); // min is a built in function that return minimun value
    }
    cout << "maximum : " << maxNum << endl
         << "minimum : " << minNum << endl;

    return 0;
}