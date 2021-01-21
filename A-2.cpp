#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,tcost=0,k,n,w;
    cin>>k;
    cin>>n;
    cin>>w;
    for (i=1;i<(w+1);i++){
        tcost += (k*i);
    }
    if ((n-tcost)<0){
        cout<<abs(n-tcost);
    }
    else if ((n-tcost)>0){
        cout<<0;
    }
}


