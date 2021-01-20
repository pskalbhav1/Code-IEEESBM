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
    
    sort(num.rbegin(),num.rend());
    for(auto i:num)
        cout<<i<<" ";
}