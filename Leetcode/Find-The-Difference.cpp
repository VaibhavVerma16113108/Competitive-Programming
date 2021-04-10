class Solution
{
public:
    char findTheDifference(string s, string t)
    {
        map<char, int> mp;
        for (char ch : t)
        {
            mp[ch]++;
        }
        for (char ch : s)
        {
            mp[ch]--;
        }
        char answer = 'a';
        for (auto x : mp)
        {
            if (x.second > 0)
            {
                answer = x.first;
                break;
            }
        }
        return answer;
    }
};