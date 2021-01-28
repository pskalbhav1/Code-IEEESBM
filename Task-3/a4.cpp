#include <stdio.h>
#include<algorithm>
#include <vector>
#include<iostream>
#include <math.h>

using namespace std;
int main()
{

        int n;
        cin>>n;

        int sum=0;
       vector <int> v(n);

       for(int p=0;p<n;p++)
        cin>>v[p];


        sort(v.begin(),v.end());
        for(int i=0;i<n;i=i+2)
        {
            sum=sum+v[i+1]-v[i];
        }
        cout<<sum;



}
