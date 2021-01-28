#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main (){
	int i,input,num;
	vector<int> vec;
	cin >> num;
	for (i=0;i<num;i++){
	    cin >> input;
	    vec.push_back(input);
	}
	while (vec.size()>1){
	    auto max=max_element(vec.begin(),vec.end());
	    vec.erase(max);
	    if (vec.size()==1)
	        break;
	    auto min=min_element(vec.begin(),vec.end());
	    vec.erase(min);
	}
	for (int x : vec)
	    cout << x << " ";
	return 0 ;
}
	    

