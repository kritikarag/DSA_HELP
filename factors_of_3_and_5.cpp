#include<bits/stdc++.h>
using namespace std;

int main(){
    long high, low;
    cin>>low>>high;
    vector<long>store1,store2;
    //long three = log(low)/log(3), five =log(low)/log(5), res=0;
    long three = 1, five = 1, res = 0;

    while(three<=high){
        long five = 1;
        while(five<=high){
            int curr = three*five;
            if (curr >= low && curr <= high)
            { 
                res++;
                //cout<<curr<<" ";
            }
            five*=5;
        }
        three*=3;
    } 
    //return res;
    cout<<res<<endl;
    return 0;
}