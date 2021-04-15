#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a=1,N;
    cout<<"enter N";
    cin>>N;
    for(a=1;a<N;a++)
    {
        if(a%2==0)
        {cout<<a<<"\n";}
    }
    return 0;
}