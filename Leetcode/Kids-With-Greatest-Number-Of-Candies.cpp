class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        vector<bool> ans(candies.size());
        int maximum = 0;
        for (auto x : candies)
        {
            maximum = max(x, maximum);
        }
        for (int i = 0; i < candies.size(); i++)
        {
            if (maximum - candies[i] <= extraCandies)
            {
                ans[i] = true;
            }
            else
            {
                ans[i] = false;
            }
        }
        return ans;
    }
};