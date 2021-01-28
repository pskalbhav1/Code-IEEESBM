#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--!=0)
    {
        int n; long long c,sum=0;
        cin>>n>>c;
        vector<long> ak(n);
        for(int i=0;i<n;i++)
        {
            cin>>ak[i];
            sum+=ak[i];
        }
        sum<=c?cout<<"Yes":cout<<"No";
        cout<<endl;
    }
}