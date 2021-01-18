#include <iostream>

using namespace std;

int main()
{
int a,b;
cout<<"Enter The First number:";
cin>>a;
cout<<"Enter The Second number:";
cin>>b;
cout<<"Before switching a and b are "<<a<<" and "<<b<<" respectively"<<endl;
a=a+b;
b=a-b;
a=a-b;
cout<<"After switching a and b are "<<a<<" and "<<b<<" respctively"<<endl;

return 0;
}