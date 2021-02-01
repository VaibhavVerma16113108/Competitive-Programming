class Solution
{
public:
    int totalMoney(int n)
    {
        int amount = 0;
        for (int i = 1; i <= n / 7; i++)
        {
            amount += 7 * (i + 3);
        }
        amount += ((n % 7) * (2 * (n / 7 + 1) + (n % 7 - 1))) / 2;
        return amount;
    }
};