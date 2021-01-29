class Solution
{
public:
    vector<int> diStringMatch(string S)
    {
        int n = S.length();
        vector<int> ans(n + 1);
        int inc = 0, dec = n;
        for (int i = 0; i < n; i++)
        {
            if (S[i] == 'I')
            {
                ans[i] = inc;
                inc++;
            }
            else
            {
                ans[i] = dec;
                dec--;
            }
        }
        ans[n] = inc;
        return ans;
    }
};