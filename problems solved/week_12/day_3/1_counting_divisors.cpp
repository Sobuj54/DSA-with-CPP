#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e6;

void precomputeDivisors(vector<int> &count)
{
    for (int i = 1; i <= N; i++)
    {
        for (int j = i; j <= N; j += i)
        {
            count[j]++;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    vector<int> a(N + 1, 0);
    precomputeDivisors(a);
    while (t--)
    {
        int n;
        cin >> n;
        cout << a[n] << "\n";
    }
    return 0;
}