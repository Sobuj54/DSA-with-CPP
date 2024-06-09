#include <iostream>

using namespace std;

int main()
{
    int n, flag = 0;
    cin >> n;
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            cout << n << " is not prime" << endl;
            flag++;
            break;
        }
    }

    if (flag == 0)
    {
        cout << n << " is prime" << endl;
    }

    // all prime numbers in a range
    for (int i = 2; i <= n; i++)
    {
        int j;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j == i)
        {
            cout << i << endl;
        }
    }
}