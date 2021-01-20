#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
using namespace std;


int main(){
    int testcase,setters,sumofprob,exactprob,days,problems,cnt=0,i;
    cin >> testcase ;
    while (testcase){
        cin >> setters >> exactprob >> days;
        for (i=0;i<setters;i++){
            cin >> problems;
            sumofprob+=problems;
        }
        cnt = sumofprob/exactprob;
        if (cnt>days)
            cnt=days;
        cout << cnt << endl;
        cnt=0;
        sumofprob=0;
        testcase--;
    }
    return 0;
}