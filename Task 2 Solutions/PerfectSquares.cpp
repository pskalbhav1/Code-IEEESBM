#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,l=-100000000,b;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>b;
		int p=sqrt(b);
		if(p*p!=b)
		l=max(l,b);
	}
	cout<<l<<'\n';
	return 0;
}   