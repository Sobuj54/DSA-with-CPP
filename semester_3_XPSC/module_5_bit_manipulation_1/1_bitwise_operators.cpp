#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a = 11, b = 19;
    int res = (a & b);          // bitwise AND operator
    int ans = (a | b);          // bitwise OR operator
    int XOR = (a ^ b);          // bitwise XOR operator
    int leftShift = (a << 1);   // left shift 1 bits
    int rightShift = (14 >> 1); // right shift 1 bits

    cout << res << "\n";        // 3
    cout << ans << "\n";        // 27
    cout << XOR << "\n";        // 24
    cout << leftShift << "\n";  // 22
    cout << rightShift << "\n"; // 7
    return 0;
}