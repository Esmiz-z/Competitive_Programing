#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    int half_sum = sum / 2;
    int current_sum = 0;
    int count = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        current_sum += a[i];
        count++;
        if (current_sum > half_sum)
        {
            break;
        }
    }
    cout << count << endl;
}
