#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> vec;
    int n,i,insert,testcase,input;
    cin >> n;
    for (i=0;i<n;i++){
        cin >> insert;
        vec.push_back(insert);
    }  
    sort(vec.begin(),vec.end());
    vector<int>::iterator index;
    cin >> testcase;
    for ( i=0;i<testcase;i++){
        cin >> input;
        bool present = binary_search(vec.begin(),vec.end(),input);
        if (present!=1){
            index=upper_bound(vec.begin(),vec.end(),input)+1;
            cout << "No" <<" " << (index- vec.begin()) << endl;
            continue;
        }
        index=lower_bound(vec.begin(),vec.end(),input)+1;     
        cout << "Yes" << " " << (index- vec.begin()) << endl;
    }
    return 0;
}
  