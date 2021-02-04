class Solution
{
public:
    vector<int> decrypt(vector<int> &code, int k)
    {
        int n = code.size();
        vector<int> decrypt(n);
        if (k == 0)
            return decrypt;
        else
        {
            // use sliding window technique
            bool positive = true;
            if (k < 0)
            {
                positive = false;
                reverse(code.begin(), code.end());
                k = -k;
            }
            int sum = 0;
            for (int i = 1; i <= k; i++)
            {
                sum += code[i % n];
            }
            decrypt[0] = sum;
            for (int i = 1; i < n; i++)
            {
                sum -= code[i % n];
                sum += code[(i + k) % n];
                decrypt[i % n] = sum;
            }
            if (!positive)
                reverse(decrypt.begin(), decrypt.end());
            return decrypt;
        }
    }
};