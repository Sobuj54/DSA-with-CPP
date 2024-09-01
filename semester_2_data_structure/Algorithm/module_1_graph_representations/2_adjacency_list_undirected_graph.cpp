#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> matrix[n]; // matrix of vector

    /*
    input:
    6 6 n,e
    0 1 a,b
    1 5
    0 4
    0 3
    3 4
    2 4
    */

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        matrix[a].push_back(b);
        matrix[b].push_back(a);
    }

    for (int i = 0; i < n; i++)
    {
        cout << i << " : ";
        for (int x : matrix[i])
        {
            cout << x << " ";
        }
        cout << endl;
    }

    /*
    output:
        0 : 1 4 3
        1 : 0 5
        2 : 4
        3 : 0 4
        4 : 0 3 2
        5 : 1

    */

    return 0;
}
