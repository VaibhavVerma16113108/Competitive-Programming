#include <iostream>
#include <vector>
#include <map>
using namespace std;
#define ll long long

ll getSum(int countNums)
{
    ll sum = 0;
    for (int i = 0; i < countNums; i++)
    {
        ll num;
        cin >> num;
        sum += num;
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    ll sum1 = getSum(n);
    ll sum2 = getSum(n - 1);
    cout << sum1 - sum2 << endl;
    ll sum3 = getSum(n - 2);
    cout << sum2 - sum3 << endl;
    return 0;
}