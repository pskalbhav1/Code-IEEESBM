#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int k,w; long long n,d=0;
    //cout<<"enter price of one banana\n>";
    cin>>k;
    //cout<<"input money you have\n>";
    cin>>n;
    //cout<<"input number of banana you want\n>";
    cin>>w;
    long long cost=(w)*(w+1)*0.5*k;
    d=max(cost-n,d);
    cout<<d;

}