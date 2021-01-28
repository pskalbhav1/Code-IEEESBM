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
    vector<int> skill(n);
    for(int i=0;i<n;i++)
        cin>>skill[i];
    sort(skill.begin(),skill.end());
    int sum=0;
    for(int i=0;i<n;i+=2)
        sum+=skill[i+1]-skill[i];
    cout<<sum;
}