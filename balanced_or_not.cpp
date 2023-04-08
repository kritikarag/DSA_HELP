#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<string>exp(n);
    vector<int>rep(n);
    for(int i=0;i<n;i++){
        cin>>exp[i];
    }
    for(int i=0;i<n;i++){
        cin>>rep[i];
    }

    vector<int>ans;
    for(int i=0;i<n;i++){
        string temp = exp[i];
        int chance = rep[i];

        stack<char>st;
        bool flag = 1;
        for(int j=temp.length()-1;j>=0;j--){
            if(temp[j]=='<'){
                if(st.empty()){
                    flag = 0;
                    break;
                }
                else{
                    st.pop();
                }
            }
            else {
                st.push(temp[j]);
            }
        }

        if(flag==0 || chance<st.size()){
            ans.push_back(0); 
        }
        else{
            ans.push_back(1); 
        }
    }

    for(int i:ans)cout<<i<<" ";
    cout<<endl;

    return 0;
}