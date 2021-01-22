#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    long int n,k,d;
    while(t--){
        int x=0,tp=0;
        cin>>n>>k>>d;
        long int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n;i++)
        tp=tp+a[i];
        x=tp/k;
        if(x>d)
        cout<<d<<endl;
        else
        cout<<x<<endl;
    }
}