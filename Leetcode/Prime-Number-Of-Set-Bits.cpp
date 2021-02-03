class Solution
{
public:
    int countSetBits(int n)
    {
        int ans = 0;
        while (n)
        {
            ans += (n & 1);
            n = (n >> 1);
        }
        return ans;
    }
    int countPrimeSetBits(int L, int R)
    {
        vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19};
        int ans = 0;
        for (int k = L; k <= R; k++)
        {
            if (find(primes.begin(), primes.end(), countSetBits(k)) != primes.end())
                ans++;
        }
        return ans;
    }
};