#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"1st number: ";
    cin>>a;
    cout<<"2nd number: ";
    cin>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swapping \nFirst number :"<<a<<" Second number: "<<b;

    return 0;

}