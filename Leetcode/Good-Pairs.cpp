class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        map<int, int> mp;
        for (auto x : nums)
        {
            mp[x]++;
        }
        int ans = 0;
        for (auto p : mp)
        {
            ans += (p.second) * (p.second - 1) / 2;
        }
        return ans;
    }
};