#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n,k;
    cin>>n>>k;
    vector<long long int> arr(n);
    vector<long long int> diff;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    // for(auto x: arr)
    //     cout<<x<<" ";
    for (int i = 1; i < n; i++)
    {
        diff.push_back(arr[i-1] - arr[i]);
    }
    sort(diff.begin(),diff.end());
    // for(auto x: diff)
    //     cout<<x<<" ";
    long long int sum = arr[n-1] - arr[0];
    for (int i = 0; i < k-1; i++)
    {
        sum += diff[i];
    }
    
    if (n==k)
    {
        cout<<0<<endl;
    }
    else{
        cout<<sum<<endl;
    }
    
    return 0;
}