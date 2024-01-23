#include <iostream>
using namespace std;

void fib(int n)
{
    int first = 0, second = 1, third;
    for (int i = 0; i < n; i++)
    {
        cout << first << "  ";
        third = first + second;
        first = second;
        second = third;
    }
}

int main()
{
    int x;
    cin >> x;
    fib(x);
    return 0;
}

// input: 7
// output: 0  1  1  2  3  5  8