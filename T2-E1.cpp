#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int n,first=0,second=1,next;
    cout<<"enter n";
    cin>>n;
    cout<<first;
    while(second<n)
    {
     cout<<second;
     next=first+second;
     first=second;
     second=next;
    }
    return 0;
}