#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int k,j=0,count=0,ans=0;
    cin>>k;

    while (j < arr.size())
    {
        if (arr[j] > arr[j - 1])
        {
            count++;
        }
        else
        {
            if (count + 1 >= k)
            {
                ans += count - k + 2;
                count = 0;
            }
        }
        j++;
    }
    if (count + 1 >= k)
        ans += count - k + 2;
    
    cout<< ans <<endl;

    return 0;
}
