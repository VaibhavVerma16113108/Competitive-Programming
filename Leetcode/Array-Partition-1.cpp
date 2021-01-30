// Since the sum of the array is fixed and we need to maximise the sum of the smaller group, we should minimise the difference between the sum of the 2 groups. This can be done by sorting the array and picking up each consecutive pair.

class Solution
{
public:
    int arrayPairSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int sum = 0;
        for (int i = 0; i < nums.size(); i += 2)
        {
            sum += nums[i];
        }
        return sum;
    }
};