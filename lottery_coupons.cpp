#include<bits/stdc++.h>
using namespace std;

int calculate(int num){
    int sum =0;
    while(num){
        sum+=num%10;
        num/=10;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;

    int ans = 0;
    unordered_map<int,int>mp;
    int res = 1;
    for(int i=1;i<=n;i++){
        int curr = calculate(i);
        mp[curr]++;
        res=max(mp[curr],res);
    }

    for(auto it:mp){
        if(it.second==res){
            ans++;
        }
    }

    cout<<ans<<endl;

    return 0;
}