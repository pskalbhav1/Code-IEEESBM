#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    if(n%3==0)
    {
     if(n%5==0)
     {cout<<"both";}
     else
     {
        cout<<"\n multiple of 3";
     }
    }
    else if(n%5==0)
    {cout<<"multiple of 5";}
    else
    {cout<<"invalid input";}
     return 0;
    }
    

