#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    vector<int> vec;
    int n,i,rem1,rem2,insert;
    cin >> n;
    for (i=0;i<n;i++){
        cin >> insert;
        vec.push_back(insert);
    } 
    cin >> rem1;
    vec.erase(vec.begin()+rem1-1) ;
    cin >> rem1;
    cin >> rem2;
    vec.erase(vec.begin()+rem1-1,vec.begin()+rem2-1);
    cout << vec.size() << endl;
    for(int it : vec) {
        cout << it << " ";
    }
    return 0;
}
