#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int max_element = -1;
    int x;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x > max_element + 1)
        {
            cout << i + 1;
            flag = 1;
            break;
        }

        max_element = max(max_element, x);
    }

    if (flag == 0)
        cout << -1;
    return 0;
}