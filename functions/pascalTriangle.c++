// pascals triangle uses nCr formula = n! / (n-r)! * r!
#include <iostream>
using namespace std;

int fact(int x)
{
    int factorial = 1;
    for (int i = 2; i <= x; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int main()
{
    int n, result;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            result = fact(i) / (fact(i - j) * fact(j));
            cout << result << " ";
        }
        cout << endl;
    }
    return 0;
}

// input: 5
// output:
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1