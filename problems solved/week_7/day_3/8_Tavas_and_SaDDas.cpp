#include <bits/stdc++.h>
#define BIG 1000000007
using namespace std;

vector<int> v;

void push(long long num)
{
    if (num > BIG)
        return;

    if (num)
        v.push_back(num);

    push(num * 10 + 4);
    push(num * 10 + 7);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    push(0);

    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == n)
        {
            cout << i + 1 << "\n";
            break;
        }
    }
    return 0;
}