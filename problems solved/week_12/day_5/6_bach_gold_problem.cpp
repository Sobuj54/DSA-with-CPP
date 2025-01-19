#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, div = 0;
    cin >> n;
    if (n % 2 == 1)
    {
        div = (n / 2);
        cout << div << endl
             << 3 << " ";
        for (int i = 0; i < div - 1; i++)
            cout << 2 << " ";
        cout << endl;
    }
    else
    {
        div = n / 2;
        cout << div << endl;
        for (int i = 0; i < div; i++)
            cout << 2 << " ";
        cout << endl;
    }
    return 0;
}