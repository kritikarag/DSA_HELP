#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>stockPrices(n);
    for(int i=0;i<n;i++){
        cin>>stockPrices[i];
    }

    int k;
    cin>>k;

    int j = 1, count = 0, ans = 0;
    while (j < stockPrices.size())
    {
        if (stockPrices[j] > stockPrices[j - 1])
        {
            count++;
        }
        else
        {
            if (count + 1 >= k)
            {
                ans += count - k + 2;
            }

            count = 0;
        }
        j++;
    }
    if (count + 1 >= k)ans += count - k + 2;
    
    return ans;

    cout<< ans <<endl;

    return 0;
}
