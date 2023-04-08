#include<bits/stdc++.h>
using namespace std;

bool winnerOfGame(string colors)
{
    long long cntA = 0, cntB = 0, alice = 0, bob = 0;
    for (char c : colors)
    {
        if (c == 'A')
        {
            cntA++;
            if (cntA >= 3)
                alice += cntA - 2;
            cntB = 0;
        }
        else
        {
            cntB++;
            if (cntB >= 3)
                bob += cntB - 2;
            cntA = 0;
        }
    }
    return alice > bob;
}

int main(){
    string str;
    cin>>str;
    cout<<(winnerOfGame(str)?"Wendy":"Bob")<<endl;
    return 0;
}