class Solution
{
public:
    int numDigits(int num)
    {
        int digits = 0;
        while (num > 0)
        {
            num /= 10;
            digits++;
        }
        return (digits) % 2;
    }
    int findNumbers(vector<int> &nums)
    {
        int ans = 0;
        for (auto num : nums)
        {
            ans += numDigits(num);
        }
        return nums.size() - ans;
    }
};