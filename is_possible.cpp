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

        if(curr.x>c && curr.y>d)break;

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