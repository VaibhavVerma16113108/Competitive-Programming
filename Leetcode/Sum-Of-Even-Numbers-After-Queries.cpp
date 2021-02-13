class Solution
{
public:
    vector<int> sumEvenAfterQueries(vector<int> &A, vector<vector<int>> &queries)
    {
        int sumEven = 0;
        for (auto i : A)
        {
            if (i % 2 == 0)
                sumEven += i;
        }
        vector<int> output;
        for (auto q : queries)
        {
            int val = q[0];
            int idx = q[1];
            if (!(A[idx] & 1))
                sumEven -= A[idx];
            A[idx] += val;
            if (!(A[idx] & 1))
                sumEven += A[idx];
            output.push_back(sumEven);
        }
        return output;
    }
};