#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

int main (){
	int testcase,num,candies,i,sum=0,j,arr[100];
	cin >> testcase;
	while (testcase--){
		cin >> num >> candies;
		for (i=0;i<num;i++){
			cin >> arr[i];
		}
		sum = accumulate(arr,arr+num,sum);
		if (sum>candies)
			cout << "No\n";
		else 
			cout << "Yes\n";
		sum=0;	
	}
return 0;
}