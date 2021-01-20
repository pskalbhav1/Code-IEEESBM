#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int n; int count=0;
    cout<<"size of array\n>";
    cin>>n;
    vector<long> numbers(n);
    cout<<"members of array\n>";
    for(int i=0;i<n;i++)
    {
        cin>>numbers[i];
        if(i==numbers[i])
            count++;
    }
    if(count==n)
    {
        cout<<count;
        return 0;
    }
    //cout<<finder(numbers,n,2);
    for(int i=0;i<n;i++)
    { 
        if(i==numbers[i])
            continue;
        if(numbers[numbers[i]]==i)
        {
            cout<<count+2;
            return 0;
        }
    }
    cout<<count+1;
    return 0;
}