class Solution
{
public:
    int hammingDistance(int x, int y)
    {
        int cnt = 0;
        for (int i = 0; i < 32; i++)
        {
            cnt += ((x & 1) != (y & 1));
            x = (x >> 1), y = (y >> 1);
        }
        return cnt;
    }
};

// Brian Kerninghan's Algorithm: https://www.techiedelight.com/brian-kernighans-algorithm-count-set-bits-integer/

class Solution
{
public:
    int hammingDistance(int x, int y)
    {
        int n = x ^ y, cnt = 0;
        while (n)
        {
            cnt++;
            n &= (n - 1);
        }
        return cnt;
    }
};