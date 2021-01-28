#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

int main (){
	int input,i,num,diff=0,sumofdiff=0;
	vector<int> vec;
	cin >> num;
	for (i=0;i<num;i++){
	    cin >> input;
	    vec.push_back(input);
	}
	sort(vec.begin(),vec.end());
	for (auto it=vec.begin();it<vec.end();it+=2){
	    diff=*(it+1)-*it;
	    sumofdiff+=diff;
	}
	cout << sumofdiff;
return 0;
}