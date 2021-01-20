#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int finder(vector<int> numbers,int n,int se)
{

    for(int i=0;i<n;i++)
    {
        if(numbers[i]==se)
            return i;
    }
    return -1;
}
int main()
{
    int n; int i1=-1,i2=-1;
    cout<<"size of array\n>";
    cin>>n;
    vector<long> numbers(n);
    cout<<"members of array\n>";
    for(int i=0;i<n;i++)
        cin>>numbers[i];
    for(int i=0;i<n;i++)
    {
        std::vector<int>::iterator it; 
        if(i==numbers[i])
            continue;
        else
        {
            i1=finder(numbers,n,numbers[i])
            
        }
        
    }
}