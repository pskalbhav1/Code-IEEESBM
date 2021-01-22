#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k=1,x=0;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i+=2){
            a[i]=b[i/2];
            x=x+1;
            a[i+1]=b[n-k];
            x=x+1;
            k++;
            if(x==n)
            break;
        }
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<endl;

    }
}