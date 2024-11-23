int lenOfLongestSubarr(vector<int> &arr, int k)
{
    map<long long, int> prefix_map;
    long long prefix_sum = 0;
    int max_length = 0;

    for (int i = 0; i < arr.size(); ++i)
    {
        prefix_sum += arr[i];

        if (prefix_sum == k)
        {
            max_length = i + 1;
        }

        if (prefix_map.find(prefix_sum - k) != prefix_map.end())
        {

            max_length = max(max_length, i - prefix_map[prefix_sum - k]);
        }

        if (prefix_map.find(prefix_sum) == prefix_map.end())
        {
            prefix_map[prefix_sum] = i;
        }
    }

    return max_length;
}