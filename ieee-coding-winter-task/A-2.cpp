#include<iostream>
using namespace std;
int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int i,t=0;
    for(i=0;i<w;i++){
        t=t+(i+1)*k;
    }
    if(t>n)
    cout<<t-n;
    else
    cout<<"0";
}