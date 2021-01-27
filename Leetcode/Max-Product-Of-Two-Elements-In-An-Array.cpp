class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int mx = -1, idx = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > mx)
            {
                mx = nums[i];
                idx = i;
            }
        }
        nums[idx] = -1;
        int ans = mx - 1;
        mx = -1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > mx)
            {
                mx = nums[i];
            }
        }
        return ans * (mx - 1);
    }
};