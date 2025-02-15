class Solution
{
public:
    void backtracking(vector<int> &nums, vector<int> &a, vector<vector<int> > &ans, int freq[])
    {
        if (a.size() == nums.size())
        {
            ans.push_back(a);
            return;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (!freq[i])
            {
                a.push_back(nums[i]);
                freq[i] = 1;
                backtracking(nums, a, ans, freq);
                freq[i] = 0;
                a.pop_back();
            }
        }
    }

    vector<vector<int> > permute(vector<int> &nums)
    {
        int n = nums.size();
        vector<vector<int> > ans;
        vector<int> a;
        int freq[n];
        for (int i = 0; i < n; i++)
            freq[i] = 0;
        backtracking(nums, a, ans, freq);
        return ans;
    }
};