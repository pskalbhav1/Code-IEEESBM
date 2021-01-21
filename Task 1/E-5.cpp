#include<iostream>
#include<conio.h>
using namespace std;
int a,b,c;
int main()
{
    cout<<"Enter the three numbers:"<<endl;
    cin>>a>>b>>c;

    if ((a>b) && (a>c))
    cout<<"The greatest of the three is "<<a;

    else if ((b>a) && (b>c))
    cout<<"The greatest of the three is "<<b;

    else if ((c>a) && (c>b))
    cout<<"The greatest of the three is "<<c;

    else
        cout<<"Either 2 or all of the numbers are equal";
}
