#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,ns=0,ps=0,k=0,flag=0,cz=0;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0)
            cz++;
        }
        for(int i=0;i<n;i++){
            if(a[i]>0)
            ps+=a[i];
            else if(a[i]<0)
            ns+=a[i];
        }
        for(int i=n-cz;i<n;i++)
        b[i]=0;
    if(ps>ns*-1){
        for(int i=0;i<n;i++){
            if(a[i]>0){
            b[k]=a[i];
            k++;
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]<0){
                b[k]=a[i];
                k++;
            }
        }
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
        cout<<b[i]<<" ";
        cout<<endl;
        }
    else if(ps<ns*-1){
        for(int i=0;i<n;i++){
            if(a[i]<0){
            b[k]=a[i];
            k++;
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]>0){
            b[k]=a[i];
            k++;
            }
        }
    cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
        cout<<b[i]<<" ";
        cout<<endl;
    }
    else if(ps==ns*-1)
    cout<<"NO"<<endl;
    }
}  