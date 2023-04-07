#include<bits/stdc++.h>
using namespace std;

int main(){
    long high, low;
    cin>>low>>high;
    vector<long>store1,store2,ans;
    long three = 1, five =1, res=0;
    while(three<=high){
        long five = 1;
        while(five<=high){
            int curr = three*five;
            if (curr >= low && curr <= high)
            {
                cout<<curr<<" ";
                res++;
            }
            five*=5;
        }
        three*=3;
    } 
    //cout<<endl;
    return 0;
}