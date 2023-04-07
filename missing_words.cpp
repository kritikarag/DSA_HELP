#include<bits/stdc++.h>
using namespace std;

int main(){

    string s,t;
    getline(cin,s);
    getline(cin,t);

    unordered_map<string,int>mp1,mp2;
    stringstream str(s),temp(t);
    string word; 

    while(temp>>word){
        mp2[word]++;
    }

    while (str >> word)
    {
        if (mp2[word] > 0)
            mp2[word]--;
        else
            cout << word << " ";
    }

    return 0;
}