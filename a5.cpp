#include <stdio.h>
#include<algorithm>
#include <vector>
#include<iostream>
#include <math.h>
#include <string>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s;
    int n;
   cin>>s>>n;
   int c=1;

   if(s=="front")
   c=c*(-1);

   if(n==1)
   {
       c=c*(-1);
   }

   if(c==-1)
    cout<<'R';

    else
    cout<<'L';



}


