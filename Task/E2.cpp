#include<iostream>
#include<stdio.h>
using namespace std;
int main()
    { 
        int a,b,temp;
        cin>>a>>b;
        a+=b;
        b=a-b;
        a-=b;
        return 0;
    }
