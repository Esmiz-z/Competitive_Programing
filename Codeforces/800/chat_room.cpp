#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    string target = "hello";
    int index = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == target[index])
        {
            index++;
        }
        if (index == target.size())
        {
            break;
        }
    }
    if (index == target.size())
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }
}
