class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_set<int> helper(nums1.begin(), nums1.end());
        vector<int> output;
        for (auto number : nums2)
        {
            if (helper.count(number))
            {
                output.push_back(number);
                helper.erase(number);
            }
        }
        return output;
    }
};