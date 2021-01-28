#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main (){
	int testcase,workers,i,salaries,min,diff;
	cin >> testcase;
	while (testcase--){
	    cin >> workers;
	    for (i=0;i<workers;i++)
	    	cin >> salaries[i];
	    min=*min_element(arr,arr+workers);
	    for (i=0;i<workers;i++){
	    	diff+=salaries[i]-min;
	    }
	    cout << diff << endl;
	}
return 0;
}