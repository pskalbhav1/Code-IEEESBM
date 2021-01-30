#include<iostream>
using namespace std;
int main()
{
    int a,b,sum;
    cout<<"1st number: ";
    cin>>a;
    cout<<"2nd number: ";
    cin>>b;
    sum=a+b;
    if(sum%2==0)
    {
        cout<<" Sum of "<<a<< "and "<<b<< " is "<< sum<<" which is an even number";
    }
    else{
       cout<<"The Sum of "<<a<< " and "<<b<<" is "<< sum<<" which is an odd number";
    }

    return 0;

}