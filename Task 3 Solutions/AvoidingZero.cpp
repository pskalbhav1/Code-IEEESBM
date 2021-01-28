#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t,n,a[100],i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll sum=0;
        for(i=0;i<n;i++)
        {
           cin>>a[i];
           sum=sum+a[i];
        }
        if(sum==0)
        {
            cout<<"NO\n";
            continue;
        }
        else 
        {
            cout<<"YES\n";
            sort(a,a+n);
            if(sum<0)
            {
                for(i=0;i<n;i++)
                {
                    cout<<a[i]<<" ";
                }
            }
            else
            {
                for(i=n-1;i>=0;i--)
                {
                    cout<<a[i]<<" ";
                }
            }
            cout<<endl;
        }
    }
}