class Solution
{
public:
    long long maximumSumSubarray(vector<int> &a, int k)
    {
        vector<long long> prefixSum;
        long long sum = 0;
        for (int val : a)
        {
            sum += val;
            prefixSum.push_back(sum);
        }

        long long mx = 0;
        for (int i = 0; i <= a.size() - k; i++)
        {
            if (i == 0)
            {
                mx = max(prefixSum[k - 1], mx);
            }
            else
            {
                mx = max((prefixSum[k + i - 1] - prefixSum[i - 1]), mx);
            }
        }
        return mx;
    }
};
