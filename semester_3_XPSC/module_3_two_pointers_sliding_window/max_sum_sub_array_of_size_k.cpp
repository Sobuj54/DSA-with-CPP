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

// different approach
class Solution
{
public:
    long long maximumSumSubarray(vector<int> &a, int k)
    {
        long long l = 0, r = 0, mx = 0, sum = 0;
        while (r < a.size())
        {
            sum += a[r];
            if (r - l + 1 == k)
            {
                mx = max(sum, mx);
                sum -= a[l];
                l++;
            }

            r++;
        }
        return mx;
    }
};