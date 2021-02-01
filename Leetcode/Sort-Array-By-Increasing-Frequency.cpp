class Solution
{
public:
    static bool comp(pair<int, int> &a, pair<int, int> &b)
    {
        if (a.second == b.second)
            return a.first > b.first;
        return a.second < b.second;
    }
    vector<int> frequencySort(vector<int> &nums)
    {
        map<int, int> mp;
        for (auto i : nums)
        {
            mp[i]++;
        }
        vector<pair<int, int>> temp;
        for (auto x : mp)
        {
            temp.push_back({x.first, x.second});
        }
        sort(temp.begin(), temp.end(), comp);
        vector<int> ans;
        for (auto pr : temp)
        {
            for (int i = 0; i < pr.second; i++)
                ans.push_back(pr.first);
        }
        return ans;
    }
};