#include<iostream>
using namespace std;
int main(){
    int n,c1=0,c2=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
    for(int i=0;i<n;i++)
	{
	    if(a[i]==i)
	    {
	        c1++;
	    }
        else if(a[a[i]]==i){
            c2++;
        }
    }
if(c2>=2)
cout<<c1+2;
else if(c1==n)
cout<<c1;
else
cout<<c1+1;
}