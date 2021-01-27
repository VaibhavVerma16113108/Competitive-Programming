class Solution
{
public:
    string restoreString(string s, vector<int> &indices)
    {
        int n = s.length();
        string answer(n, 'x');
        for (int i = 0; i < n; i++)
        {
            answer[indices[i]] = s[i];
        }
        return answer;
    }
};