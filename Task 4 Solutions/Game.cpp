#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    ll n,a[1000],i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<a[(n-1)/2]<<endl;
}