#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int flag;
    while(t--){
        int x,y,k,n;
        flag=0;
        cin>>x>>y>>k>>n;
        int p[n],c[n];
        for(int i=0;i<n;i++){
            cin>>p[i]>>c[i];
        }
        int d=x-y;
        for(int i=0;i<n;i++){
            if(d<=p[i] && k>=c[i]){
            flag=1;
            break;
            }
        }
        if(flag==0)
        cout<<"UnluckyChef"<<endl;
        else if(flag==1)
        cout<<"LuckyChef"<<endl;
    }
}