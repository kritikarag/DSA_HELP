 #include <bits/stdc++.h>
using namespace std;
 
void maximumIndex(int N, int B)
{
    int maxi = 0;

    for (int i = 1; i <= N; i++)
    {

        maxi += i;
    }

    int curr = maxi, step = N;

    while (1)
    {
        while (curr > 0 && N > 0)
        { 
            curr -= N;

            if (curr == B)
            { 
                curr += N;
            }  
            N--;
        } 
        if (curr <= 0)
        { 
            cout << maxi << endl;
            break;
        }
 
        else
        {

            N = step; 
            curr = maxi - 1;
 
            maxi--; 
            if (curr == B)
            {

                curr = maxi - 1;

                // Decrement current index
                maxi--;
            }
        }
    }
}

// Driver Code
int main()
{
    int N = 4, B = 6;
    maximumIndex(N, B);
    return 0;
}
