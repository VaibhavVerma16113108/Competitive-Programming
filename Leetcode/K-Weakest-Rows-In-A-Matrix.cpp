class Solution
{
public:
    static bool comp(pair<int, int> &a, pair<int, int> &b)
    {
        if (a.first == b.first)
            return a.second < b.second;
        return a.first < b.first;
    }
    vector<int> kWeakestRows(vector<vector<int>> &mat, int k)
    {
        vector<int> ans(k);
        vector<pair<int, int>> cnt;
        for (int i = 0; i < mat.size(); i++)
        {
            auto row = mat[i];
            auto it = lower_bound(row.begin(), row.end(), 0, greater<int>());
            cnt.push_back({it - row.begin(), i});
        }
        sort(cnt.begin(), cnt.end(), comp);
        for (int i = 0; i < k; i++)
        {
            ans[i] = cnt[i].second;
        }
        return ans;
    }
};