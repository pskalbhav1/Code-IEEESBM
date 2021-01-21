#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
vector<int> a;
int maxDifficulty(int n){
    int mx = a[1]-a[0];
    for(int i=2;i<n;++i){
        mx = max(mx,a[i]-a[i-1]);
    }
    return mx;
}
int main(){
    int n,h;
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>h;
        a.push_back(h);
    }
    int minimum = INT_MAX;
    for(int i=1;i<n-1;++i){
        int elm = a[i];
        a.erase(a.begin() + i);
        int tmin = maxDifficulty(n);
        minimum = min(minimum, tmin);
        a.insert(i + a.begin(), elm);
    }
    cout<<minimum;
    return 0;
}



















