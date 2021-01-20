#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    ll t,n,k,d,a[100],i;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>d;
        ll sum=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        ll p=sum/k;
        cout<<min(p,d)<<endl;
    }
	// your code goes here
	return 0;
}
