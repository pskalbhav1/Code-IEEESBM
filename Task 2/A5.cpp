#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string door="."; int rail; char hand;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin>>door;
    cin>>rail;
    
    if(door.compare("front")==0)
    {
        if(rail==1)
            hand='L';
        else if(rail==2)
            hand='R';
    }
    else if(door.compare("back")==0)
    {
        if(rail==2)
            hand='L';
        else if(rail==1)
            hand='R';
    }
    cout<<hand;
}