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
        int n; cin>>n;
        vector<long> salary(n);
        for(int i=0;i<n;i++)
        {
            cin>>salary[i];
        }
        long diff=-1; int max=0,min=0,count=0; bool flag=0;
        while(flag==0)
        {
            for(int i=1;i<n;i++)
            {
                if(salary[i]>salary[max])
                {
                    max=i;
                }
                if(salary[i]<salary[min])
                {
                    min=i;
                }
            }
            //cout<<salary[max]<<" "<<salary[min]<<endl;
            diff=salary[max]-salary[min];
            for(int i=0;i<n;i++)
            {
                if(max!=i)
                {
                    salary[i]+=diff;
                }
            }
            count+=diff;
            for(int i=0;i<n-1;i++)
            {
                if(salary[i]!=salary[i+1])
                    break;
                if(i==n-2)
                    flag=1;
            }
        }
        cout<<count<<endl;
    }
}