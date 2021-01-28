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


    for(int k=0;k<t;k++)
    {
        int n,c,a;
        cin>>n>>c;
        int sum=0;

        for(int i=0;i<n;i++)
        {
            cin>>a;
            sum=sum+a;
        }
        if(sum<=c)
        cout<<"Yes"<<"\n";
        else
        cout<<"No"<<"\n";

    }
}
