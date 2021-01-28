#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

int main (){
	int i,j,n,m,arr[100],arr2[100];
	cin >> n;
	for (i=0;i<n;i++){
	    cin >>arr[i];
	}
	cin >> m;
	for (j=0;j<m;j++){
	    cin >> arr2[j];
	}
	sort(arr,arr+n);
	sort(arr2,arr2+m);
	cout << arr[n-1] << " " << arr2[m-1];	    
return 0;
}