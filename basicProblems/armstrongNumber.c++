#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, x, rem, total = 0;
    cin >> n;
    x = n;

    while (x != 0)
    {
        rem = x % 10;
        total += pow(rem, 3);
        x = x / 10;
    }

    cout << n << endl;
    cout << total << endl;
    if (n == total)
    {
        cout << "The number " << n << " is Armstrong" << endl;
    }
    else
    {
        cout << "The number " << n << " is not Armstrong" << endl;
    }
    return 0;
}