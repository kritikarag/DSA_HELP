#include<bits/stdc++.h>
using namespace std;

struct pos{
    int x;
    int y;
};

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int flag = 0;
    
    queue<pos>q;
    pos start;
    start.x = a;
    start.y = b;
    q.push(start);

    while(!q.empty()){
        pos curr = q.front();
        q.pop();
        if(curr.x==c && curr.y==d){
            flag = 1;
            break;
        }

        if(curr.x>c && curr.y>d)break; // Try using || operator if it doesn't works

        pos temp1, temp2;
        temp1.x = curr.x + curr.y;
        temp1.y = curr.y;

        q.push(temp1);

        temp2.x = curr.x;
        temp2.y = curr.y + curr.x;

        q.push(temp2);

    }
    
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}





#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

const int INF = 100000000;

bool move(int a, int b, int c, int d, vector<vector<int>> &dp)
{
    // memoizing is here
    if (dp[a][b] != -1)
    {
        return dp[a][b];
    }
    dp[a][b] = INF;
    if (a == c && b == d)
    {
        return true;
    }
    else if (a > c || b > d)
    {
        return false;
    }
    else
    {
        bool ans = false;
        if (move(a + b, b, c, d, dp))
        {
            ans = true;
        }
        if (move(a, a + b, c, d, dp))
        {
            ans = true;
        }
        dp[a][b] = ans;
    }
    return dp[a][b];
}

int main()
{
    int n = 1001, m = 1001;
    vector<vector<int>> dp(n, vector<int>(m, -1));
    int a = 1, b = 2, c = 3, d = 6;
    bool ans = move(a, b, c, d, dp);
    cout << ans << endl;
    return 0;
} 