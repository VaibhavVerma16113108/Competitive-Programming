class Solution
{
public:
    int calPoints(vector<string> &ops)
    {
        stack<int> stk;
        for (auto s : ops)
        {
            if (isdigit(s[0]) || s[0] == '-')
            {
                int digit = stoi(s);
                stk.push(digit);
            }
            else if (s == "+")
            {
                int temp = stk.top();
                stk.pop();
                int newRecord = temp + stk.top();
                stk.push(temp);
                stk.push(newRecord);
            }
            else if (s == "D")
            {
                stk.push(stk.top() * 2);
            }
            else if (s == "C")
            {
                stk.pop();
            }
        }
        int ans = 0;
        while (!stk.empty())
        {
            cout << stk.top() << endl;
            ans += stk.top();
            stk.pop();
        }
        return ans;
    }
};