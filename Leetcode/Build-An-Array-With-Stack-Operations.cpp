class Solution
{
public:
    vector<string> buildArray(vector<int> &target, int n)
    {
        int curr = 1, i = 0;
        vector<string> ans;
        while (i < target.size())
        {
            ans.push_back("Push");
            if (target[i] == curr)
            {
                i++;
            }
            else if (target[i] > curr)
            {
                ans.push_back("Pop");
            }
            curr++;
        }
        return ans;
    }
};