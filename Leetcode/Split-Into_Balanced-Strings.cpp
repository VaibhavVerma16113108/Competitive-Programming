class Solution
{
public:
    int balancedStringSplit(string s)
    {
        int count = 0;
        int charCount = 0;
        for (auto ch : s)
        {
            if (ch == 'R')
            {
                charCount++;
            }
            else
            {
                charCount--;
            }
            if (charCount == 0)
            {
                count++;
            }
        }
        return count;
    }
};