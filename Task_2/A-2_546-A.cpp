#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
using namespace std;


int main(){
    int cost,inmoney,numban,i,sum=0,diff;
    cin >> cost >> inmoney >> numban;
    for (i=0;i<numban;i++){
        sum+=cost*(i+1);
    }
    diff=sum-inmoney;
    cout << diff;
    return 0;
}
    
