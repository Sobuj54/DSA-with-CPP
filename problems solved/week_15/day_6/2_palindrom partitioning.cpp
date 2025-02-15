class Solution
{
public:
    bool isPalindrom(string &s, int l, int r)
    {
        while (l <= r)
        {
            if (s[l] != s[r])
                return false;
            l++, r--;
        }
        return true;
    }

    void backtracking(int n, string &s, vector<vector<string>> &ans, vector<string> &a, int idx)
    {
        if (idx == n)
        {
            ans.push_back(a);
            return;
        }

        for (int i = idx; i < n; i++)
        {
            if (isPalindrom(s, idx, i))
            {
                a.push_back(s.substr(idx, i - idx + 1));
                backtracking(n, s, ans, a, i + 1);
                a.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s)
    {
        int n = s.size();
        vector<vector<string>> ans;
        vector<string> a;
        backtracking(n, s, ans, a, 0);
        return ans;
    }
};