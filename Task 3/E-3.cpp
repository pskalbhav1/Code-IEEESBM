#include <iostream>
using namespace std;

int main(){
    int n,n2=0;
    cout<<"Enter a number:";
    cin>>n;
    while (n!=0)
    {
        n=n/10;
        n2++;
    }
    cout<<"The number of digits is "<<n2;
        
    return 0;}