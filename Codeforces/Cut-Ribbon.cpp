#include <iostream>
#include <vector>
using namespace std;

int count_pieces(int length, int a, int b, int c)
{
    int maximum = 0;
    for (int i = 0; i <= length / a; i++)
    {
        for (int j = 0; j <= length / b; j++)
        {
            int size = length - a * i - b * j;
            if (size >= 0 and size % c == 0)
            {
                int k = size / c;
                maximum = max(maximum, i + j + k);
            }
        }
    }
    return maximum;
}

int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    cout << count_pieces(n, a, b, c);
    return 0;
}