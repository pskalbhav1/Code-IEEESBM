#include<bits/stdc++.h>

using namespace std;

long maxIPS(vector<long> a){
    int n = a.size();
    sort(a.begin(),a.end(),greater<long>());
    long max = 0;
    int sqr = 0;
    for (int i = 0; i < n; i++)
    {
        sqr = sqrt(a[i]);
        if (sqr*sqr != a[i])
        {
            max = a[i];
            i = n+1;
        }
        
    }
    
    return max;
}

int main(){
    int n = 0;
    cin>>n;
    vector<long> num;
    for (int i = 0; i < n; i++)
    {
        long m;
        cin>>m;
        num.push_back(m);
    }
    // for (auto x: num)
    //     cout<<x<<" ";
    // cout<<endl;
    cout<<maxIPS(num)<<endl;
    return 0;
}