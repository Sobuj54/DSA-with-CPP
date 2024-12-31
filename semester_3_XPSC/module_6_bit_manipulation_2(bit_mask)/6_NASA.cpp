#include <bits/stdc++.h>
using namespace std;

const int N = 1 << 15;
vector<int> palindrome;

bool isPalindrome(int a)
{
    string s = to_string(a);
    int len = s.size();
    for (int i = 0; i < len / 2; i++)
    {
        if (s[i] != s[len - i - 1])
            return false;
    }
    return true;
}

void storePalindromes()
{
    for (int i = 0; i < N; i++)
    {
        if (isPalindrome(i))
            palindrome.push_back(i);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    storePalindromes();
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), cnt(N + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            cnt[a[i]]++;
        }

        long long pairs = n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < palindrome.size(); j++)
            {
                int cur = a[i] ^ palindrome[j];
                pairs += cnt[cur];
            }
        }
        cout << pairs / 2 << "\n";
    }
    return 0;
}