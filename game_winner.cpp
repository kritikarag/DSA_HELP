#include<bits/stdc++.h>
using namespace std;

bool winnerOfGame(string colors)
{
    long long cntA = 0, cntB = 0, wendy = 0, bob = 0;
    for (char c : colors)
    {
        if (c == 'W')
        {
            cntA++;
            if (cntA >= 3)
                wendy += cntA - 2;
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
    if (wendy > bob)return "Wendy";
    else return "Bob";
}

int main(){
    string str;
    cin>>str;
    cout<<(winnerOfGame(str)?"Wendy":"Bob")<<endl;
    return 0;
}