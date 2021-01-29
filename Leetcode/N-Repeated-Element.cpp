class Solution
{
public:
    int repeatedNTimes(vector<int> &A)
    {
        unordered_set<int> s;
        int ans = A[0];
        for (int x : A)
        {
            if (s.count(x) >= 1)
            {
                ans = x;
                break;
            }
            s.insert(x);
        }
        return ans;
    }
};