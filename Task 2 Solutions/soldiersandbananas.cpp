#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
    ll n,k,w,cost=0,i;
    cin>>k>>n>>w;
    for(i=0;i<w;i++)
    {
        cost=cost+(i+1)*k;
    }
    if(cost-n>0)
    cout<<cost-n<<endl;
    else
    {
        cout<<0<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,w;
	cin>>k>>n>>w;
	int cost=w*k*(w+1)/2;
	if(cost-n>=0)
	{
	    cout<<cost-n<<endl;
	}
	else
	{
	    cout<<0;
	}
	
}   