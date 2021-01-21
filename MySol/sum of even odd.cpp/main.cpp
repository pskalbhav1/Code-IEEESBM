#include <iostream>

using namespace std;

int main()
{
    int a,b,sum;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
    sum=a+b;
    if(sum%2==0)
        cout<<"sum of given numbers is even";
    else
       cout<<"sum of given numbers is odd";
}
