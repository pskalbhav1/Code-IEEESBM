#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter Number 1 : ";
    cin>>a;
    cout<<"Enter Number 2 : ";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swapping : \nNumber 1 = "<<a<<"\nNumber 2 = "<<b;
    return 0;
}
