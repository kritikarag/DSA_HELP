#include<bits/stdc++.h>
using namespace std;

int main(){
    int high, low;
    cin>>low>>high;
    vector<int>ans;

    for(int i=low;i<=high;i++){
        int n =i;
        while(n%3==0){
            n/=3;
        }
        while(n%5==0){
            n/=5;
        }
        if(n==1)ans.push_back(i);
    }
    for(int i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}