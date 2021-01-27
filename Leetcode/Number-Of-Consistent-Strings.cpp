class Solution
{
public:
    int countConsistentStrings(string allowed, vector<string> &words)
    {
        map<char, int> mp;
        for (auto ch : allowed)
        {
            mp[ch]++;
        }
        int count = 0;
        for (auto s : words)
        {
            bool ok = true;
            for (auto ch : s)
            {
                if (!mp[ch])
                {
                    ok = false;
                    break;
                }
            }
            if (ok)
                count++;
        }
        return count;
    }
};