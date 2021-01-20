    
#include<bits/stdc++.h>
using namespace std;
int main()
{
     freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	string s;
	int n;
	cin>>s;
	cin>>n;
	if(s=="front" && n==1)
	{
	    cout<<"L\n";
	}
	else if(s=="front" && n==2)
	{
	    cout<<"R\n";
	}
	else if(s=="back" && n==1)
	{
	    cout<<"R\n";
	}
	else 
	{
	    cout<<"L\n";
	}
}
	