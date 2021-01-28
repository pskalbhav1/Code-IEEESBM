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
	int testcase,i,j,num,arr[50],sum;
	cin >> testcase;
	while (testcase--){
	    sum=0;
	    cin >> num;
	    for (i=0;i<num;i++){
	        cin >> arr[i];
	        if (arr[i]==0)
	        	j++;
	    }
	    sum=accumulate(arr,arr+num,sum);
	    if (sum==0 || j==num-1){
	        cout << "NO\n";
	        continue;
	    }
	   	else if (sum>0) {
	   		sort(arr,arr+num,greater());
	   		for (i=0;i<num;i++)
	   			cout << arr[i] << " ";
	   		cout << endl;
	   	}
	   	else if (sum<0){
	   		sort(arr,arr+num);
	   		for (i=0;i<num;i++)
	   			cout << arr[i] << " ";
	   		cout << endl;
	   	}
	}
	return 0 ;
}
	        

