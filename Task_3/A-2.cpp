#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

int main (){
	int testcase,arr[4],i,j,arr2[100000][2],cnt;
	cin >> testcase;
	while (testcase--){
	    cnt=0;
	    for (i=0;i<4;i++)
	        cin >> arr[i];
	    for (i=0;i<arr[3];i++){
	        for (j=0;j<2;j++){
	            cin >> arr2[i][j];    
	        }
	    }
	    for (i=0;i<arr[3];i++){
	        if (arr2[i][0]<(arr[0]-arr[1])){
	            continue;
	        }
	        else {
	            if (arr2[i][1]<=arr[2]){
	                cnt++;
	                break;
	            }
	        }
	    }
	    if (cnt==0)
	        cout << "UnluckyChef\n";
	    else if (cnt==1)
	        cout << "LuckyChef\n";
	}
return 0;
}