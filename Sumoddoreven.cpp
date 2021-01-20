#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the values of two numbers:"<<a<<endl<<b<<endl;
cin>>a>>b;
c=a+b;
cout<<"The sum is:"<<c;
if(c%2==0)
{
cout<<"The sum is even";
}
else
{
    cout<<"The sum is odd:";
}
return 0;

}