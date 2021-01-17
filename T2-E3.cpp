#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int a,b,sum;
    cout<<"enter a and b";
    cin>>a>>b;
    sum=a+b;
    cout<<"sum is"<<sum;
    if(sum%2==0)
    {
        cout<<"\n sum is even";
    }else
    {cout<<"\n sum is odd";}
    return 0;
}