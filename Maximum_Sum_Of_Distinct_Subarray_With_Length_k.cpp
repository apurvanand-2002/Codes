class Solution
{
public:
    long long maximumSubarraySum(vector<int> &nums, int k)
    {
        long long int sum = 0;
        long long int maxo = 0;
        map<int, int> check;
        for (int i = 0; i < (k - 1); i++)
        {
            sum = sum + nums[i];
            check[nums[i]]++;
        }
        for (int i = (k - 1); i < nums.size(); i++)
        {
            sum += nums[i];
            check[nums[i]]++;
            if (check.size() == k)
            {
                maxo = max(sum, maxo);
            }
            if (check[nums[i - k + 1]] == 1)
            {
                check.erase(nums[i - k + 1]);
            }
            else
            {
                check[nums[i - k + 1]]--;
            }
            sum = sum - nums[i - k + 1];
        }
        return maxo;
    }
};