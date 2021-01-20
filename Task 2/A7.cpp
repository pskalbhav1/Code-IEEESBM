#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    //cout<<"test cases\n>";
    int t; cin>>t;
    while(t--!=0)
    {
        //cout<<"array size\n>";
        int n; cin>>n;
        //cout<<"array memebers\n>";
        vector<long long> num(n); 
        for(int i=0;i<n;i++)
            cin>>num[i];
        int left=0,right=n-1;
        for(int i=0;i<n/2;i++)
        {
            cout<<num[left++]<<" "<<num[right--]<<" ";
        }
        if(n%2==1)
            cout<<num[left];
        cout<<endl;
    }
}