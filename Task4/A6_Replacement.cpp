#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    if (arr[0] == 1 && arr[n-1]==1)
    {
    arr[n-1] = 2;

    }
    else{
        arr[n-1] = 1;
    }
    sort(arr.begin(),arr.end());
    for(auto x: arr)
        cout<<x<<" ";
    return 0;
}