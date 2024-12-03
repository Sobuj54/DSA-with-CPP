class Solution
{
public:
    int longestKSubstr(string &s, int k)
    {
        map<char, int> m;
        int l = 0, r = 0, n = s.size(), len = -1;
        while (r < n)
        {
            m[s[r]]++;
            if (m.size() == k)
            {
                len = max(len, r - l + 1);
            }
            else
            {
                while (m.size() > k)
                {
                    m[s[l]]--;
                    if (m[s[l]] == 0)
                        m.erase(s[l]);
                    l++;
                }
            }
            r++;
        }

        return len;
    }
};