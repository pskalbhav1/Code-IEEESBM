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
    int n;cin>>n;
    vector<long long> num(n);
    cout<<"input space separated numbers for array\n>";
    for(int i=0;i<n;i++)
        cin>>num[i];
    sort(num.rbegin(),num.rend());
    for(auto i:num)
    {
        double sr=sqrt(i);
        if((int)sr!=sr)
        {
            cout<<i;
            break;
        }
    }
}