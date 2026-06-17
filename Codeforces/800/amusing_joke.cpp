#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int s1found = 0, s2found = 0;
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    for (int i = 0; i < s1.size(); i++)
    {
        for (int j = 0; j < s3.size(); j++)
        {
            if (s1[i] == s3[j])
            {
                s3.erase(s3.begin() + j);
                s1found++;
                break;
            }
        }
    }
    for (int i = 0; i < s2.size(); i++)
    {
        for (int j = 0; j < s3.size(); j++)
        {
            if (s2[i] == s3[j])
            {
                s3.erase(s3.begin() + j);
                s2found++;
                break;
            }
        }
    }

    // Fixed: Added s3.empty() to ensure NO extra letters are left behind
    if (s1found == s1.size() && s2found == s2.size() && s3.empty())
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }
}
