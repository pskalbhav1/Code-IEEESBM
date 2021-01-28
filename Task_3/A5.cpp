#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int n,m; 
    cin>>n;
    vector<int> array1(n);
    for(int i=0;i<n;i++)
        cin>>array1[i];
    cin>>m;
    vector<int> array2(m);
    for(int i=0;i<m;i++)
        cin>>array2[i];
    sort(array1.begin(),array1.end());
    sort(array2.begin(),array2.end());
    cout<<array1[n-1]<<" "<<array2[m-1];
    return 0;
}