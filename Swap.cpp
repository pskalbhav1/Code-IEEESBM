#include<iostream>
using namespace std;  
int main()
{
    int i=2, j=3, k;
    cout<<"Before swapping:"<<endl;
    cout<<"i="<<i<<",j="<<j<<endl;
    k=i;
    i=j;
    j=k;

    cout<<"\nAfter swapping:"<<endl;
    cout<<"i="<<i<<",j="<<j<<endl;
    
    return 0;

}