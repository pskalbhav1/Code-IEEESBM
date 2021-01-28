#include <iostream>
#include <algorithm>
#include <vector>
#include<numeric>
using namespace std;

void swap (int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main (){
	int testcase,i,num,arr[50],sum;
	cin >> testcase;
	while (testcase--){
	    sum=0;
	    cin >> num;
	    for (i=0;i<num;i++){
	        cin >> arr[i];
	    }
	    sum=accumulate(arr,arr+num,sum);
	    if (sum==0){
	        cout << "NO\n";
	        continue;
	    }
	   	else if (sum>0) {
	   		sort(arr,arr+num,greater<int>());
	   		cout << "YES\n" ;
	   		for (i=0;i<num;i++)
	   			cout << arr[i] << " ";
	   		cout << endl;
	   	}
	   	else if (sum<0){
	   		sort(arr,arr+num);
	   		cout << "YES\n";
	   		for (i=0;i<num;i++)
	   			cout << arr[i] << " ";
	   		cout << endl;
	   	}
	}
	return 0 ;
}
	        

