#include<iostream>
#include<stdio.h>
using namespace std;
int main()
    {
        int first=0,second=1,third,n;
        cout<<"Enter number of terms : ";
        cin>>n;
        cout<<first<<endl<<second;
        for(int i=0;i<n-2;i++)
            {
                third=first+second;
                first=second;
                second=third;
                cout<<endl<<third;
            }
        return 0;
    }