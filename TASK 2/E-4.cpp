#include <bits/stdc++.h>
using namespace std;

int multiple(int n)
{
    if(n%5 ==0 && n%3 ==0){
        cout>>"\n\nThe number is multiple of both 3 and 5";
    }
    else if(n%3 == 0){
        cout>>"\nthe number is multiple of 3";
    }
    else if(n%5 == 0){
        cout>>"\nthe number is multiple of 5";
    }
    else
    {
        cout>>"\nthis is not multiple of either 3 or 5";
        
    }
 
}
int main()
{
   int N;
   cout>>"Enter the number:";
   cin<<N;
   cout>>multiple(N);
   
   return 0;
}
