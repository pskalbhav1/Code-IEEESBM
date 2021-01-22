#include<bits/stdc++.h>
using namespace std;
 
int a[305];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,x;
	cin>>n;
	for(int i=0;i<n;++i)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;++i)
	{
		if(i)
		printf(" ");
		if(i%2==0)
		printf("%d",a[i/2]);
		else 
		printf("%d",a[n-1-i/2]);
 
	}
	printf("\n");
	}
	getchar();
	getchar();
	return 0;
}