#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int> num(n);
    for(int i=0;i<n;i++)
        cin>>num[i];
    sort(num.begin(),num.end());
    n%2==0?cout<<num[n/2-1]:cout<<num[n/2];
}