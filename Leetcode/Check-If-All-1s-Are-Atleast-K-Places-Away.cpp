class Solution
{
public:
    bool kLengthApart(vector<int> &nums, int k)
    {
        int pos = -1e6;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i])
            {
                if (i - pos <= k)
                    return false;
                else
                    pos = i;
            }
        }
        return true;
    }
};