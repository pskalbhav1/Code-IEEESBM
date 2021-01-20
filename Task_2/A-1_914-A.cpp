#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
using namespace std;


int main(){
    int i,num,arr[1000],j=0;
    float temp,fractional,whole;
    vector<int> max;
    cin >> num;
    for (i=0;i<num;i++)
        cin >> arr[i];
    for (i=0;i<num;i++){
        temp=sqrt(arr[i]);
        fractional=modf(temp,&whole);
        if (fractional!=.0){
            max.push_back(arr[i]);
        }
    }
    cout << *max_element(max.begin(), max.end()) << endl;
return 0;
}
    
