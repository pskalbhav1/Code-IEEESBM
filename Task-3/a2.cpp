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
        int n,x,y,k;
        cin>>x>>y>>k>>n;
        int check=0;
        for(int i=0;i<n;i++)
        {
            int p,c;
            cin>>p;
            cin>>c;
            if(p>=x-y&&k>=c)
            {
                check=1;

            }

        }
        if(check==1)
        cout<<"LuckyChef"<<"\n";
        else
        cout<<"UnluckyChef"<<"\n";

    }
}
