#include <stdio.h>
#include<algorithm>
#include <vector>
#include<iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;


    for(int j=0;j<t;j++)
    {
        int n;
        cin>>n;
        int x=0;
        int sum=0;
       vector <int> v(n);
       for(int p=0;p<n;p++)
        cin>>v[p];

       while(1>0)
       {
           sort(v.begin(),v.end());
           x=v[n-1]-v[0];
           if(x==0)
            break;

            sum+=x;
           for(int i=0;i<n-1;i++)
           {
               v[i]+=x;
           }

       }
       cout<<sum<<"\n";

    }
}
