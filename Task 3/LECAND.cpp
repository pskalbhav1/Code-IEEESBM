#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long int n,c,s=0;
        cin>>n>>c;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            s+=s+a[i];
        }
        if(s<=c)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;

    }
}