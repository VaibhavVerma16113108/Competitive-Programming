class Solution
{
public:
    vector<int> minSubsequence(vector<int> &nums)
    {
        sort(nums.begin(), nums.end(), greater<int>());
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
            sum += nums[i];
        int curr = 0, i = 0;
        vector<int> ans;
        while (curr <= sum and i < nums.size())
        {
            ans.push_back(nums[i]);
            curr += nums[i];
            sum -= nums[i];
            i++;
        }
        return ans;
    }
};