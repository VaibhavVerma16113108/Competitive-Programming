class Solution
{
public:
    bool canBeEqual(vector<int> &target, vector<int> &arr)
    {
        map<int, int> mp;
        for (int i : target)
        {
            mp[i]++;
        }
        for (int i : arr)
        {
            mp[i]--;
        }
        for (auto pr : mp)
        {
            if (pr.second != 0)
                return false;
        }
        return true;
    }
};