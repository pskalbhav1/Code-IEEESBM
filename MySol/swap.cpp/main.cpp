#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
    c=a;
    a=b;
    b=c;
    cout<<"after swapping the value of a is: "<<a;
    cout<<"\nafter swapping the value of b is: "<<b;

}
