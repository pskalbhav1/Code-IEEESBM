#include<stdio.h>
#include<iostream>
using namespace std; 
#include<string.h> 
void solve(string );
int main()
{
	int t;
	cin>>t; 
	int i;
	for(i=0;i<t;i++)
	{
		string s;
		cin>>s;
		solve(s);
	}
	return 0;
 
	} 
	void solve(string s)
	{ int i;
		long int count=0;
		long int l=s.size();
		for(int i=0;i<l;i++)
		{
			if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='O'||s[i]=='I'||s[i]=='U')
			{
				count+=(l-i)*(i+1);
 
			}
		} 
		cout<<count<<endl;
 
	}

