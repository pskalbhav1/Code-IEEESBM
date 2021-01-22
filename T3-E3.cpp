#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int num;
    int count = 0;
    cout<<"Enter any number: ";
    cin>>num;
    do
    {
        count++;
        num /= 10;
    } while(num != 0);
    cout<<"Total digits:"<<count;
    return 0;
}