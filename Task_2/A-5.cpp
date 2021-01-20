#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
using namespace std;


int main(){
    int rail,i;
    string side;
    cin >> side;
    cin >> rail;
    if (side=="front"){
        if (rail==1)
        cout << "L";
        else if (rail==2)
        cout << "R";
    }
    else if (side=="left"){
        if (rail==1)
        cout << "R";
        else if (rail==2)
        cout << "L";
    }
    return 0;
}