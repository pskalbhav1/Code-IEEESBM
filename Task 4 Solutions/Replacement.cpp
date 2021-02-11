#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	if(arr[n-1]!=1)
	arr[n-1]=1;
	else
	{
		arr[n-1]=2;
	}
	sort(arr,arr+n);
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
