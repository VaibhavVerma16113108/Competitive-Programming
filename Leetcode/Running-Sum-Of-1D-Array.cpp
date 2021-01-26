class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        vector<int> answer(nums.size());
        answer[0] = nums[0];
        int sum = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            sum += nums[i];
            answer[i] = sum;
        }
        return answer;
    }
};