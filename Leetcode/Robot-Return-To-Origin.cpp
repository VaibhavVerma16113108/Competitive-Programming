class Solution
{
public:
    bool judgeCircle(string moves)
    {
        int xpos = 0, ypos = 0;
        for (char ch : moves)
        {
            if (ch == 'R')
                xpos++;
            else if (ch == 'L')
                xpos--;

            if (ch == 'U')
                ypos++;
            else if (ch == 'D')
                ypos--;
        }
        return (xpos == 0 && ypos == 0);
    }
};