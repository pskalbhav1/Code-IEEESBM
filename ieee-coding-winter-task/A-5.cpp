#include<iostream>
using namespace std;
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s;
	int n;
	cin>>s;
	cin>>n;
	if(s=="front")
	{
		if(n==1)
	    cout<<"L\n";
		else
	    cout<<"R\n";
	}
	else 
	{
		if(n==1)
		cout<<"R\n";
		else 
		cout<<"L\n";
	}
}
	
