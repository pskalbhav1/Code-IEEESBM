#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter a number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    cout<<"Before swapping the numbers were "<<a<<" and "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;    
    cout<<"After swapping the numbers are "<<a<<" and "<<b<<endl;
    return 0;}