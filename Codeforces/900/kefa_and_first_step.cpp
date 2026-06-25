// PROBLEM: 580A - Kefa and First Steps

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int current_streak = 1;
    int max_streak = 1;

    for (int i = 0; i < n - 1; i++)
    {

        if (v[i + 1] >= v[i])
        {
            current_streak++;
        }
        else
        {
            current_streak = 1;
        }

        max_streak = max(max_streak, current_streak);
    }

    cout << max_streak << "\n";
}
