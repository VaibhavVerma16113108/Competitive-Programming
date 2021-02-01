class Solution
{
public:
    int countCharacters(vector<string> &words, string chars)
    {
        vector<int> cnt(26);
        for (auto ch : chars)
        {
            cnt[ch - 'a']++;
        }
        int ans = 0;
        for (string s : words)
        {
            bool ok = true;
            vector<int> tempcnt = cnt;
            for (char ch : s)
            {
                if (--tempcnt[ch - 'a'] < 0)
                {
                    ok = false;
                    break;
                }
            }
            if (ok)
                ans += s.size();
        }
        return ans;
    }
};