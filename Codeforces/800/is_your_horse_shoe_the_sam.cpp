#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    unordered_set<int> s;
    for (int i = 0; i < 4; i++)
    {
        int c;
        cin >> c;
        s.insert(c);
    }
    if (s.size() == 4)
    {
        cout << 0 << "\n";
    }
    else if (s.size() == 3)
    {
        cout << 1 << "\n";
    }
    else if (s.size() == 2)
    {
        cout << 2 << "\n";
    }
    else
    {
        cout << 3 << "\n";
    }
}
