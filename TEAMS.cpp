#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,d,s=0;
    cin>>n;
    int t=n/2;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i=i+2){
        d=v[i+1]-v[i];
        s=s+d;
    }
    cout<<s;
}