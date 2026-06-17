#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int lower = 0, upper = 0;
    string s;
    cin >> s;
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
    if (islower(s[0]) && lower == 1)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        s[0] = toupper(s[0]);
        cout << s << "\n";
    }
    else if (upper == s.size())
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s << "\n";
    }
    else
    {
        cout << s << "\n";
    }
}