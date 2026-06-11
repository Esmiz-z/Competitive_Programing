#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int x, moves = 0;
    cin >> x;
    moves = x / 5;
    if (x % 5 != 0)
    {
        moves++;
    }
    cout << moves << "\n";
}