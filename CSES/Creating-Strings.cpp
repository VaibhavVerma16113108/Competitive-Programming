#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    set<string> permutations;
    sort(s.begin(), s.end());
    do
    {
        permutations.insert(s);
    } while (next_permutation(s.begin(), s.end()));
    vector<string> ans(permutations.begin(), permutations.end());
    cout << ans.size() << endl;
    for (auto str : ans)
    {
        cout << str << endl;
    }
    return 0;
}