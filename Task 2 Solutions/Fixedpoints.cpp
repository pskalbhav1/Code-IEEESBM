#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[100000],count=0,c=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
	    if(a[i]==i)
	    {
	        count++;
	    }
	    else
	    {
	        if(a[a[i]]==i)
	        {
	            c++;
	        }
	    }
	}
	if(c>=2)
   count=count+2;
   else if(count==n)
   {
       count=count+0;
   }
   else
   {
       count=count+1;
   }
   cout<<count<<endl;
	
	
	
}   