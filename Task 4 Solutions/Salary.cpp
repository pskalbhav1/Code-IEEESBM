#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long t,n,i,x,s=0;
	cin>>t;
	while(t-->0)
	{
	    cin>>n;
	    s=0;
	    long a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    x=sizeof(a)/sizeof(a[0]);
	    sort(a,a+x);
	    for(i=0;i<n;i++)
	    s=s+a[i];
	    s=s-n*a[0];
	    cout<<s<<endl;
	}
	return 0;
}
