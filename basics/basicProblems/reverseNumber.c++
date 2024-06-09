#include <iostream>
using namespace std;

int main()
{
    int n, x, reverse = 0, rem;
    cin >> n;
    x = n;

    while (x != 0)
    {
        rem = x % 10;
        reverse = 10 * reverse + rem;
        x = x / 10;
    }

    cout << reverse << endl;
    return 0;
}

// input: 123
// output: 321