#include <iostream>
using namespace std;
void mul(float a,float b)
{
    cout<<"\n"<<a*b;
}
void div(float a,float b)
{   float t=a/b;
    cout<<"\n"<<t;
}
void add(float a,float b)
{
    cout<<"\n"<<a+b;
}
void sub(float a,float b)
{
    cout<<"\n"<<a-b;
}

int main()
{
   float a,b;
   cout<<"enter a: ";
   cin>>a;
   cout<<"enter b: ";
   cin>>b;
   mul(a,b);
   div(a,b);
   add(a,b);
   sub(a,b);
   return 0;
}
