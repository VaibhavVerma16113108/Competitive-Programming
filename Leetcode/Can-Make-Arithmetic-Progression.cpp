class Solution
{
public:
    bool canMakeArithmeticProgression(vector<int> &arr)
    {
        set<int> s;
        int firstTerm = INT_MAX;
        int lastTerm = INT_MIN;
        for (int i : arr)
        {
            firstTerm = min(firstTerm, i);
            lastTerm = max(lastTerm, i);
            s.insert(i);
        }
        int diff = lastTerm - firstTerm; // a_l = a + (n-1)d

        if (diff % (arr.size() - 1) != 0)
            return false;
        diff /= (arr.size() - 1);

        int i = 0;
        while (i < arr.size())
        {
            if (!s.count(firstTerm))
                return false;
            firstTerm += diff;
            i++;
        }
        return true;
    }
};