#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long m,x,y,t,i,c=0,p,q,j;
	
	cin>>t;
	while(t-->0)
	{
	    c=0;
	    long b[101]={0};
	    p=0;
	    q=0;
	    cin>>m;
	    cin>>x;
	    cin>>y;
	    long a[m];
	    for(i=0;i<m;i++)
	    cin>>a[i];
	    for(i=0;i<m;i++)
	    {
	        p=(a[i]-x*y)<=1?1:(a[i]-x*y);
	        q=(a[i]+x*y)>=100?100:(a[i]+x*y);
	        //cout<<p<<endl;
	        //cout<<q<<endl;
	        for(j=p;j<=q;j++)
	        b[j]--;
	    }
	    for(i=1;i<=100;i++)
	    {
	        //cout<<b[i]<<endl;
	        if(b[i]==0)
	        {
	            c=c+1;
	        }
	    }
	   cout<<c<<endl;
	}
	return 0;
}

