#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int curr = n;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        s.insert(num);
        if (num == curr)
        {
            while (s.count(curr))
            {
                cout << curr << " ";
                s.erase(curr);
                curr--;
            }
        }
        cout << endl;
    }
    return 0;
}