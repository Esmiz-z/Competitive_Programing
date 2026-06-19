#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int k, n, w, total;
    cin >> k >> n >> w;
    total = (k * (w * (w + 1))) / 2;
    if (total > n)
    {
        cout << total - n << "\n";
    }
    else
    {
        cout << 0 << "\n";
    }
}