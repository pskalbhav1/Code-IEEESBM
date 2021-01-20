#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter n: "<<endl;
	cin>>n;
	int i,c;
	int a=0;
	int b=1;
	cout<<a<<" "<<b<<" ";
	for(int i=2;i<n;i++){
		c=a+b;
		a=b;
		b=c;
		cout<<c<<" ";

	}
	return 0;

}
