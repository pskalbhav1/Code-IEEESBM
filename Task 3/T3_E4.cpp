#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter a and b";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<b;
    return 0;
}