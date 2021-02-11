#include<bits/stdc++.h>
using namespace std;
int main()
{long long n;
string s="";
cin>>n;
while(1)
{s+="47";
sort(s.begin(),s.end());
do
{
	if(stoll(s)>=n)
	{
		cout<<s<<endl;
		return 0;
	}		
}
while(next_permutation(s.begin(),s.end()));	
}
}
