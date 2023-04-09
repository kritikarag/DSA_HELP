#include<bits/stdc++.h>
using namespace std;

// vector<string>missingWords(string s, string t){
//     unordered_map<string, int> mp1, mp2;
//     stringstream str(s), temp(t);
//     string word;

//     vector<string>res;

//     while (temp >> word)
//     {
//         mp2[word]++;
//     }

//     while (str >> word)
//     {
//         if (mp2[word] > 0)
//             mp2[word]--;
//         else
//             res.push_back(word);
//     }

//     return res;
// }

vector<string> missingWords(string s, string t)
{
    vector<string> wordsS, wordsT, missing;
    istringstream issS(s), issT(t);
    string word;
    while (issS >> word)
        wordsS.push_back(word);
    while (issT >> word)
        wordsT.push_back(word);
    
    int i = 0, j = 0;
    while (i < wordsS.size() && j < wordsT.size())
    {
        if (wordsS[i] != wordsT[j])
        {
            missing.push_back(wordsS[i]);
        }
        else
        {
            j++;
        }
        i++;
    }
    
    while (i < wordsS.size())
    {
        missing.push_back(wordsS[i]);
        i++;
    }
    return missing;
}

int main(){

    string s,t;
    getline(cin,s);
    getline(cin,t);

    vector<string>vec = missingWords(s,t);

    for(string s:vec){
        cout<<s<<endl;
    }

    return 0;
}