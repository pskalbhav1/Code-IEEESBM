#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;


int main() {
    int testcase;
	int invol,finvol,cnt=0;
	cin >> testcase;
	while (testcase){
	    cin >> invol;
	    cin >> finvol;
	    int diff;
	    diff = abs(invol-finvol);
	    while (diff){
	        if (diff>5){
	            if (diff%5==0){
	                cnt=diff/5;
	                break;
	            }
	            diff=diff-5;
	            cnt++;
	        }
	        else if (diff<5 && diff!=1){
	            diff=diff/2;
	            cnt++;
	            if (diff==1)
	                break;
	        }
	        else if (diff==1){
	            cnt++;
	            diff--;
	        }
	    }
	    cout << cnt << endl ;
	    cnt=0;
	    testcase--;
	}
return 0;
}
