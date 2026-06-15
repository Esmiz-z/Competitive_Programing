#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, a = 0, d = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            a++;
        }
        else
        {
            d++;
        }
    }
    if (a > d)
    {
        cout << "Anton" << "\n";
    }
    else if (a < d)
    {
        cout << "Danik" << "\n";
    }
    else
    {
        cout << "Friendship" << "\n";
    }
}