#include <iostream>
#include <vector>
#include <deque>
#include <set>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    deque<int> dq;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        if (!s.count(arr[i]))
        {
            dq.push_front(arr[i]);
            s.insert(arr[i]);
            if (dq.size() > k)
            {
                s.erase(dq.back());
                dq.pop_back();
            }
        }
    }
    int num_convos = min(k, (int)dq.size());
    cout << num_convos << endl;
    for (int i = 0; i < num_convos; i++)
    {
        cout << dq.front() << " ";
        dq.pop_front();
    }
    return 0;
}