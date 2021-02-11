#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    ll n,a[100],i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll sum=0;
    sort(a,a+n);
    for(i=0;i<n;i+=2)
    {
        if(a[i]!=a[i+1])
        {
            sum=sum+a[i+1]-a[i];
        }
    }
    cout<<sum<<endl;
}