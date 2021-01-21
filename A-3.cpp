#include<bits/stdc++.h>
#include<numeric>
#include<cmath>
using namespace std;
int main(){
    int testCases=0,n=0,k=0,d=0,arr[n],ans=0,total=0;
    cin>>testCases;
    for(int i=0;i<testCases;i++){
        cin>>n;
        cin>>k;
        cin>>d;
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        total = accumulate(arr, arr+n, total);
        int contests = floor(total/k);
        if(contests<=d){
            ans = contests;
        }
        else if(contests>d){
            ans = d;
        }
        cout<<ans;
    return 0;
    }
}























