#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    int upper = 0, lower = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (islower(s[i]))
        {
            lower++;
        }
        else
        {
            upper++;
        }
    }
    if (upper > lower)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << s << "\n";
    }

    else
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s << "\n";
    }
}