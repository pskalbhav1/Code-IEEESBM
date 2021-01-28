#include <stdio.h>
#include<algorithm>
#include <vector>
#include<iostream>
#include <math.h>
#include <functional>
using namespace std;
int main()
{
    int t;
    cin>>t;

    for(int k=0;k<t;k++)
    {

        int n;
        cin>>n;

        int sum=0;
         vector <int> v(n);

        for(int j=0;j<n;j++)
        {


        cin>>v[j];
        sum=sum+v[j];
        }

       if(sum>0)
       {
           cout<<"YES"<<"\n";
            sort(v.begin(), v.end(), greater<int>());
            for(int i=0;i<n;i++)
            cout<<v[i]<<" ";
            cout<<"\n";
       }
       else if(sum<0)
       {
           cout<<"YES"<<"\n";
            sort(v.begin(), v.end());
            for(int r=0;r<n;r++)
            cout<<v[r]<<" ";
            cout<<"\n";
       }
       else
       {
           cout<<"NO"<<"\n";
       }


    }
}
