#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    long double total_volume, sum = 0, orange_amount;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        double c;
        cin >> c;
        sum += c;
    }
    total_volume = sum / 100;
    orange_amount = total_volume / n;
    cout << 100 * orange_amount << "\n";
}