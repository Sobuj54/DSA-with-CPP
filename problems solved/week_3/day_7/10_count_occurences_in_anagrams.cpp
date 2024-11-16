class Solution
{
public:
    int search(string pat, string txt)
    {
        int k = pat.size();
        int n = txt.size();

        if (k > n)
            return 0;

        vector<int> patCount(26, 0);
        vector<int> windowCount(26, 0);

        for (int i = 0; i < k; i++)
        {
            patCount[pat[i] - 'a']++;
            windowCount[txt[i] - 'a']++;
        }

        int count = 0;
        if (patCount == windowCount)
            count++;

        for (int i = k; i < n; i++)
        {
            windowCount[txt[i] - 'a']++;
            windowCount[txt[i - k] - 'a']--;

            if (patCount == windowCount)
                count++;
        }

        return count;
    }
};