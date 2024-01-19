#include <iostream>
using namespace std;

int main()
{
    int n, x = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            x += 1;
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}

// output
// floyd's triangle
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15