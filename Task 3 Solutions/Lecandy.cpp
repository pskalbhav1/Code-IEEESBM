#include <bits/stdc++.h>
using namespace std;

int main() {
    long int t,n,c,a[100],i,sum;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>c;
        sum=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        if(sum>c)
        {
            cout<<"No\n";
        }
        else
        {
            cout<<"Yes\n";
        }
    }
	// your code goes here
	return 0;
}
