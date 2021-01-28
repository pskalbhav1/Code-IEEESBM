#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    //cout<<"test cases:\n>";
    int t;cin>>t;
    while(t--!=0)
    {
        long x,y,money,n;
        cin>>x>>y>>money>>n;
        pair<long, long> book[n];
        for(int i=0;i<n;i++)
        {
            cin>>book[i].first>>book[i].second;
        }
        sort(book,book+n);//this function sorts the two arrays according to increasing order of first array in pair           
        long diff=x-y;bool flag=0;
        for(int i=0;i<n;i++)
        {
            if(book[i].first>=diff && book[i].second<=money)
            {
                flag=1;
                break;
            }
        }
        flag?cout<<"LuckyChef":cout<<"UnluckyChef";
        cout<<endl;
    }
}