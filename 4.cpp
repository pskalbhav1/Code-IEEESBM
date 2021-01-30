#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter number: ";
    cin>>a;
    if(a%3==0){
        if(a%5==0)
        {
         cout<<a<<" is a multiple of both 3 and 5";
         }
         else
        cout<<a<<" is a multiple of 3 but not of 5 ";
    }
    else if (a%5==0){
         cout<<a<<" is a multiple of 5 but not of 3";
    }
    else{
    cout<<a<<" is not a multiple of either 5 or 3 ";}
    
    return 0;

}