class Solution
{
public:
    string destCity(vector<vector<string>> &paths)
    {
        map<string, string> mp;
        for (auto path : paths)
        {
            mp[path[0]] = path[1];
        }
        string dest = "";
        for (auto cities : mp)
        {
            if (mp.find(cities.second) == mp.end())
            {
                dest = cities.second;
                break;
            }
        }
        return dest;
    }
};