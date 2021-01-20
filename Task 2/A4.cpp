#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    cout<<"input the number of elements:\n>";
    int n,maxDiff=0,minDiff=0;cin>>n;
    vector<long long> num(n);
    cout<<"input space separated numbers for array\n>";
    for(int i=0;i<n;i++)
        cin>>num[i];
    for(int i=1;i<n-1;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(num[i]!=num[j])
            {
                if(i==j-1 && num[j]-num[j-2]>maxDiff )
                {
                    maxDiff=num[j]-num[j-1];
                    cout<<maxDiff;
                }
                else if(num[j]-num[j-1]>maxDiff)
                {
                    maxDiff=num[j]-num[j-1];
                    cout<<maxDiff;
                }
            }
        }
        if(minDiff==0)
            minDiff=maxDiff;
        else if(minDiff>maxDiff)
            minDiff=maxDiff;
    }
    cout<<endl<<minDiff;
}