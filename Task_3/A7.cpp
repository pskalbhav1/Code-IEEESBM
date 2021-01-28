#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<vector>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--!=0)
    {
        int n,sum=0; 
        cin>>n;
        vector<int> num(n);
        for(int i=0;i<n;i++)
            cin>>num[i];
        sort(num.begin(),num.end());
        for(int i=0;i<n;i++)
        {
            if(num[i]<0 || sum+num[i]!=0)
            {
                sum+=num[i];
                continue;
            }
            if(i<n-1)
            {
                if(num[i]!=num[i+1])
                {
                    int x=num[i];num[i]=num[i+1];num[i+1]=x;
                    sum+=num[i];
                    continue;
                }
            }
            if(i<n-2)
            {
                int x=num[i];num[i]=num[i+2];num[i+2]=x;
            }
            sum+=num[i];
        }
        if(sum==0)
            cout<<"NO"<<endl;
        else 
        {
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++)
                cout<<num[i]<<" ";
            //cout<<endl;
        }
    }
}