#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    for (int i = 0; i < 5; i++)
    {
        cout << i;
    }

    cout << "\n";

    for (int i = 0; i < 10; i++)
    {
        if (x % i == 0)
        {
            continue;
        }
        cout << i;
    }

    return 0;
}