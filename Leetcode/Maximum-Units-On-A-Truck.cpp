class Solution
{
public:
    static bool comp(vector<int> &a, vector<int> &b)
    {
        return a[1] > b[1];
    }
    int maximumUnits(vector<vector<int>> &boxTypes, int truckSize)
    {
        sort(boxTypes.begin(), boxTypes.end(), comp);
        int maxUnits = 0;
        for (auto pr : boxTypes)
        {
            if (pr[0] > truckSize)
            {
                maxUnits += truckSize * pr[1];
                break;
            }
            else
            {
                maxUnits += pr[0] * pr[1];
                truckSize -= pr[0];
            }
        }
        return maxUnits;
    }
};