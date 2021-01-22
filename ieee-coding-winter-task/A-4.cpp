#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> a,b;
    vector<int>::iterator it;
    int n,x,d,max=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        a.push_back(x);
    }
    for(int i=1;i<n-1;i++){
        it=a.begin()+i;
        x=*it;
        a.erase(it);
        for(int j=0;j<n-1;j++){
            d=a[j+1]-a[j];
            if(d>max)
                max=d;
        }
        a.insert(it,x);
        b.push_back(max);
        max=0;
    }
    sort(b.begin(),b.end());
    cout<<b[0];
}