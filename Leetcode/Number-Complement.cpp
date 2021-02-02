class Solution
{
public:
    int findComplement(int num)
    {
        int ans = 0, p = 1;
        while (num)
        {
            ans += (!(num & 1) * p);
            p = (p << 1);
            num = (num >> 1);
        }
        return ans;
    }
};