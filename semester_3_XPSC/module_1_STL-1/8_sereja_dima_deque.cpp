#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    deque<int> dq(n);
    for (int i = 0; i < n; i++)
    {
        cin >> dq[i];
    }

    int whosTurn = 1, serejaSum = 0, dimaSum = 0;
    while (!dq.empty())
    {
        int leftMost = dq.front(), rightMost = dq.back(), mx = 0;
        mx = max(leftMost, rightMost);

        if (whosTurn % 2 != 0)
        {
            serejaSum += mx;
        }
        else
        {
            dimaSum += mx;
        }
        whosTurn++;

        if (leftMost == mx)
            dq.pop_front();
        else
            dq.pop_back();
    }

    cout << serejaSum << " " << dimaSum << "\n";
    return 0;
}