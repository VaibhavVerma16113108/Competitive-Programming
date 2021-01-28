class Solution
{
public:
    int countGoodRectangles(vector<vector<int>> &rectangles)
    {
        vector<int> sizes(rectangles.size());
        int mx = -1;
        for (int i = 0; i < rectangles.size(); i++)
        {
            sizes[i] = min(rectangles[i][0], rectangles[i][1]);
            if (sizes[i] > mx)
            {
                mx = sizes[i];
            }
        }
        int cnt = 0;
        for (int side : sizes)
        {
            if (mx == side)
                cnt++;
        }
        return cnt;
    }
};