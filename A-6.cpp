#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,p=1;
    cin>>n;
    int n2=n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    while(n2!=1){
        if(v.size()==1)
        break;
        if(p==1){
            v.erase(v.end()-1);
            p=2;
            n2--;
            continue;
        }
        else{
            v.erase(v.begin());
            p=1;
            n2--;
            continue;
        }
        
    }
cout<<v[0];

}