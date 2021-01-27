class Solution
{
public:
    vector<int> sumZero(int n)
    {
        vector<int> ans(n);
        int curr = 1;
        for (int i = 0; i < n / 2; i++)
        {
            ans[i] = curr;
            ans[n - 1 - i] = -curr;
            curr++;
        }
        return ans;
    }
};