class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        vector<int> copy = nums;
        sort(copy.begin(), copy.end());
        for (int i = 0; i < nums.size(); i++)
        {
            auto it = find(copy.begin(), copy.end(), nums[i]);
            nums[i] = it - copy.begin();
        }
        return nums;
    }
};