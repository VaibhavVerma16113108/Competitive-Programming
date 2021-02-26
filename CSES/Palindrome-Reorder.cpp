#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int count[26] = {0};
    for (char ch : s)
    {
        count[ch - 'A']++;
    }
    bool oddFound = false, ok = true;
    int oddCharIdx;
    for (int i = 0; i < 26; i++)
    {
        if (oddFound && count[i] % 2)
        {
            ok = false;
            break;
        }
        else
        {
            if (count[i] % 2)
            {
                oddFound = true;
                oddCharIdx = i;
            }
        }
    }
    if (!ok || (oddFound && s.size() % 2 == 0))
        cout << "NO SOLUTION";
    else
    {
        string firstHalf, lastHalf;
        for (int i = 0; i < 26; i++)
        {
            string half(count[i] / 2, 'A' + i);
            firstHalf += half;
            lastHalf = half + lastHalf;
        }
        if (oddFound)
        {
            string temp(1, 'A' + oddCharIdx);
            firstHalf += temp;
        }
        cout << firstHalf + lastHalf;
    }
    return 0;
}