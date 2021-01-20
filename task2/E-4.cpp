#include<iostream>
using namespace std;
int main(){
	cout<<"enter the number: ";
	int a;
	cin>>a;
	if(a%3==0 & a%5==0)
	    cout<<"divisible by both 3 and 5";
	
	else if(a%3==0 & a%5!=0)
	    cout<<"only divisible by 3";
	
	else if(a%3!=0 & a%5==0)
	    cout<<"only divisible by 5";
	
	else
	    cout<<"not divisible by both";
	
	return 0;

}
