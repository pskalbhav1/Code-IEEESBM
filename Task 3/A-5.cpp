#include<iostream>
#include<algorithm>
#include<iterator>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    cout<<a[n-1]<<" "<<b[m-1]<<endl;
}
