#include <bits/stdc++.h>
using namespace std;

int LCM(int a, int b)
{
    // formula:   gcd(a,b) * lcm(a,b)  =  a*b
    return (a * b) / gcd(a, b);
    // or, (a/gcd(a,b))*b    this can stop the overflow of a*b
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    cout << __gcd(a, b) << "\n"; // gcd using library function
    cout << LCM(a, b) << "\n";
    return 0;
}