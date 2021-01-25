#include<iostream>
using namespace std;
int main()
{
    float x,y,z;
    cout<<"enter the first number";
    cin>>x;
    cout<<"enter the second number";
    cin>>y;
    z=y;
    y=x;
    x=z;
    cout<<"AFTER SWAPPING";
    cout<<"\n";
    cout<<"the first number is"<<x;
    cout<<"\n";
    cout<<"the second number is"<<y;
    return 0;
}
