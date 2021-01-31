class Solution
{
public:
    vector<int> sortArrayByParityII(vector<int> &A)
    {
        int i = 0, j = 1, n = A.size();
        while (i < n && j < n)
        {
            while (i < n && !(A[i] & 1))
            {
                i += 2;
            }
            while (j < n && (A[j] & 1))
            {
                j += 2;
            }
            if (i < n)
            {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
        return A;
    }
};