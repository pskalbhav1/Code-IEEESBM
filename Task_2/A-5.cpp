#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
using namespace std;


int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int rail;
    string side;
    cin >> side;
    cin >> rail;
    if (side=="front" || side=="Front"){
        if (rail==1)
        cout << "L";
        else if (rail==2)
        cout << "R";
    }
    else if (side=="back" || side=="Back"){
        if (rail==1)
        cout << "R";
        else if (rail==2)
        cout << "L";
    }
    return 0;
}
