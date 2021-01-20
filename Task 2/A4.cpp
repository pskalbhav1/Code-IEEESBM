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
    int n,minDiff=-1,couple;cin>>n;
    vector<long long> num(n);
    vector<long long> difference(n-1);
    cout<<"input space separated numbers for array\n>";
    for(int i=0;i<n;i++)
        cin>>num[i];
    for(int i=0;i<n-1;i++)
        difference[i]=num[i+1]-num[i];
    for(int i=1;i<n-1;i++)
    {
        couple=difference[i]+difference[i-1];
        for(int j=1;j<n-1;j++)
        {
            if(j==i)
                continue;
            if(couple<difference[j])            
                couple=difference[j];

        }
        if(minDiff>couple || minDiff==-1)
            minDiff=couple;
    }
    cout<<minDiff;
}