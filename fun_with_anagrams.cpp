#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>

using namespace std;

bool isAnagram(string s1, string s2)
{
    unordered_map<char, int> freq1, freq2;

    for (char c : s1)
    {
        freq1[c]++;
    }

    for (char c : s2)
    {
        freq2[c]++;
    }

    return freq1 == freq2;
}

vector<string> removeAnagramStrings(vector<string> &arr)
{
    vector<string> result;
    unordered_map<string, bool> seen;

    for (string s : arr)
    {
        string sortedStr = s;
        sort(sortedStr.begin(), sortedStr.end());

        if (!seen[sortedStr])
        {
            seen[sortedStr] = true;
            result.push_back(s);
        }
    }

    sort(result.begin(), result.end());

    return result;
}

int main()
{
    vector<string> arr = {"abcd", "abc", "cba", "efg", "gfed"};
    vector<string> result = removeAnagramStrings(arr);

    for (string s : result)
    {
        cout << s << " ";
    }

    cout << endl;

    return 0;
}
/*The isAnagram function checks whether two strings are anagrams or not by creating frequency maps for each string and comparing them. The removeAnagramStrings function creates a map of sorted strings to boolean values to keep track of which strings have been seen before. If a string is not an anagram of any previous strings, it is added to the result vector. The result vector is sorted before being returned.

In the main function, an example array is created and passed to the removeAnagramStrings function. The resulting vector is printed to the console.

Note that this implementation assumes that the input strings contain only lowercase letters. If the strings can contain uppercase letters or other characters, the isAnagram function needs to be modified accordingly.*/
