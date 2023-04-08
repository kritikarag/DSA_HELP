#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<string>s,t;
    int n = s.size();
    vector<string> ans(n, "YES");
    for (int i = 0; i < n; i++)
    {
        vector<int> a(26, 0), b(26, 0);
        for (auto x : s[i])
            a[x - 'a']++;
        for (auto x : t[i])
            b[x - 'a']++;
        for (int j = 0; j < 26; j++)
        {
            if (abs(a[j] - b[j]) > 3)
                ans[i] = "NO";
        }
    }
    return ans;
}