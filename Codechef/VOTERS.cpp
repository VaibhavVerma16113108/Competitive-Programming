#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    vector<int> list1(n1);
    for (int i = 0; i < n1; i++)
    {
        cin >> list1[i];
    }
    vector<int> list2(n2);
    for (int i = 0; i < n2; i++)
    {
        cin >> list2[i];
    }
    vector<int> list3(n3);
    for (int i = 0; i < n3; i++)
    {
        cin >> list3[i];
    }
    set<int> ids;
    set<int> temp1;
    set<int> temp2;
    for (int i = 0; i < n1; i++)
    {
        temp1.insert(list1[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        if (temp1.count(list2[i]))
        {
            ids.insert(list2[i]);
        }
        temp2.insert(list2[i]);
    }
    for (int i = 0; i < n3; i++)
    {
        if (temp1.count(list3[i]))
        {
            ids.insert(list3[i]);
        }
        if (temp2.count(list3[i]))
        {
            ids.insert(list3[i]);
        }
    }
    cout << ids.size() << endl;
    for (int id : ids)
    {
        cout << id << endl;
    }
    return 0;
}