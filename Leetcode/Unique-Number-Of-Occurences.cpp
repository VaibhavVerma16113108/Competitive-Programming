class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        map<int, int> mp;
        for (int i : arr)
        {
            mp[i]++;
        }
        set<int> s;
        for (auto x : mp)
        {
            if (s.count(x.second))
                return false;
            s.insert(x.second);
        }
        return true;
    }
};