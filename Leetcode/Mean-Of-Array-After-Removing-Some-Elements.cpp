class Solution
{
public:
    double trimMean(vector<int> &arr)
    {
        double mean = 0;
        sort(arr.begin(), arr.end());
        int i = arr.size() / 20, j = 19 * arr.size() / 20;
        for (int k = i; k < j; k++)
        {
            mean += arr[k];
        }
        return mean / ((j - i) * 1.0f);
    }
};