class Solution
{
public:
    vector<string> uncommonFromSentences(string A, string B)
    {
        map<string, int> mp;
        istringstream iss1(A);

        // Iterate the istringstream
        // using do-while loop
        do
        {
            string subs;
            // Get the word from the istringstream
            iss1 >> subs;
            mp[subs]++;

        } while (iss1);

        istringstream iss2(B);

        // Iterate the istringstream
        // using do-while loop
        do
        {
            string subs;
            // Get the word from the istringstream
            iss2 >> subs;
            mp[subs]++;

        } while (iss2);

        vector<string> ans;
        for (auto pr : mp)
        {
            if (pr.second == 1)
                ans.push_back(pr.first);
        }
        return ans;
    }
};