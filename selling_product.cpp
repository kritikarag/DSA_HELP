#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>vec(n);
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>vec[i];
        mp[vec[i]]++;
    }

    int m;
    cin>>m;

    priority_queue<int, vector<int>, greater<int>>pq;

    for(auto it:mp){
        pq.push(it.first);
    }

    while(m >= pq.top()){
        m-=pq.top();
        pq.pop();
    }

    cout<<pq.size()<<endl;
    return 0;
}