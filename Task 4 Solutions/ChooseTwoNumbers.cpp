#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    ll n,a[100],m,b[100],i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    cout<<a[n-1]<<" "<<b[m-1]<<endl;
}