class Solution
{
public:
    vector<string> commonChars(vector<string> &A)
    {
        map<char, int> mp;
        for (char ch : A[0])
        {
            mp[ch]++;
        }
        vector<string> ans;
        for (auto x : mp)
        {
            for (int i = 0; i < A.size(); i++)
            {
                int cnt = count(A[i].begin(), A[i].end(), x.first);
                mp[x.first] = min(mp[x.first], cnt);
            }
        }
        for (auto x : mp)
        {
            string temp(1, x.first);
            for (int i = 0; i < x.second; i++)
                ans.push_back(temp);
        }
        return ans;
    }
};