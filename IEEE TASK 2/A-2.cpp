#include<iostream>
using namespace std; 
int main()
{
    int k,n,w,sol;
    cin>>k>>n>>w;
    w=w*(w+1)/2;
    sol=k*w-n;
    if(sol<=0)
        sol=0;
        cout<<sol<<endl;
        return 0;
}