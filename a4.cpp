#include <stdio.h>
#include<algorithm>
#include <vector>
#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
   cin>>n;
int k;
int d=0;
int a;
int r=1000;
int c=0;
    vector<int> v(n);
    for(k=0;k<n;k++)
    {
        cin>>v[k];
        if(k>0)
        {
            int m=v[k]-v[k-1];
            if(m>d)
            {
            d=m;
            a=k;
            }

        }
    }
    for(k=1;k<n-1;k++)
    {
        if(k!=a&&k!=a-1)
        {
            c=v[k+1]-v[k-1];
            if(c<r)
            {
                r=c;
            }
        }

    }
    if(r>d)
    d=r;

    if(n==3)
    d=v[2]-v[0];
    cout<<d;



}


