#include <iostream>

using namespace std;

int main()
{
    float a,b,sum,diff,mul,div;
    cout << "Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    sum=a+b;
    diff=a-b;
    mul=a*b;
    div=a/b;
    cout<<"The sum of "<<a<<" and "<<b<<" is "<<sum<<endl;
    cout<<"The difference of "<<a<<" and "<<b<<" is "<<diff<<endl;
    cout<<"The product of "<<a<<" and "<<b<<" is "<<mul<<endl;
    cout<<"The quotient of "<<a<<" and "<<b<<" is "<<div<<endl;


    return 0;
}
