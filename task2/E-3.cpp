#include<iostream>
using namespace std;
int main(){
	cout<<"enter two numbers: ";
	int a,b,sum;
	cin>>a>>b;
	sum=a+b;
	if(sum%2==0){
	  cout<<"sum is even";
	}
	else{
	    cout<<"sum is odd";
	}
	return 0;

}
