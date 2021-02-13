class Solution
{
public:
    char slowestKey(vector<int> &releaseTimes, string keysPressed)
    {
        int mx = releaseTimes[0];
        char ans = keysPressed[0];
        for (int i = 1; i < releaseTimes.size(); i++)
        {
            if (releaseTimes[i] - releaseTimes[i - 1] > mx)
            {
                mx = releaseTimes[i] - releaseTimes[i - 1];
                ans = keysPressed[i];
            }
            else if (releaseTimes[i] - releaseTimes[i - 1] == mx && keysPressed[i] > ans)
            {
                ans = keysPressed[i];
            }
        }
        return ans;
    }
};