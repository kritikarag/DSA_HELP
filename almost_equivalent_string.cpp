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


priority_queue<int,vector<int>,greater<int>>pq;

for(int i:num){
    pq.push(i);
}

int res = 0;
while(pq.size()>1){
    int x = pq.top();
    pq.pop();
    int y = pq.top();
    pq.pop();

    res += x+y;
    pq.push(x+y);
}

res+=pq.top();

return res;



6 1 2 3 3 4 5 3     2
4 1 2 3 4 4         1 2