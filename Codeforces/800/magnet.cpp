#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, group = 1;
    cin >> t;
    vector<string> magnets;
    while (t--)
    {
        string s;
        cin >> s;
        magnets.push_back(s);
    }
    for (int i = 0; i < magnets.size() - 1; i++)
    {
        if (magnets[i] != magnets[i + 1])
        {
            group++;
        }
    }
    cout << group << "\n";
}