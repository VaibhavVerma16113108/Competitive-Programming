class Solution
{
public:
    int findTheDistanceValue(vector<int> &arr1, vector<int> &arr2, int d)
    {
        sort(arr2.begin(), arr2.end());
        int cnt = 0;
        for (int i = 0; i < arr1.size(); i++)
        {
            // perform binary search for a j such that |a[i] - a[j]| <= d
            auto it1 = lower_bound(arr2.begin(), arr2.end(), arr1[i] - d);
            auto it2 = upper_bound(arr2.begin(), arr2.end(), arr1[i] + d);
            cnt += (it1 == it2);
        }
        return cnt;
    }
};