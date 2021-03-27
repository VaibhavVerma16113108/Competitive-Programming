#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define ll long long
int main()
{
    ll n, k;
    cin >> n >> k;
    queue<ll> powers;
    for (int i = 0; i < n; i++)
    {
        int power;
        cin >> power;
        powers.push(power);
    }
    ll first_player = powers.front();
    powers.pop();
    ll victories = 0;
    ll current_winner = first_player;
    ll num_iterations = 0;
    while (victories < k)
    {
        num_iterations++;
        ll second_player = powers.front();
        powers.pop();
        if (current_winner > second_player)
        {
            powers.push(second_player);
            victories++;
        }
        else
        {
            current_winner = second_player;
            victories = 1;
            powers.push(first_player);
        }
        // cout << "Current winner: " << current_winner << " Victories: " << victories << endl;
        if (num_iterations >= n - 1)
            break;
    }
    cout << current_winner;
    return 0;
}