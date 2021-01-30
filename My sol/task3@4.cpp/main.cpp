#include <iostream>
using namespace std;
void swap(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"a is: "<<a;
    cout<<"\nb is: "<<b;
}



int main()
{
    int a,b;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
    swap(a,b);
    return 0;
}
