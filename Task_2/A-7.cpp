#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

int main (){
    int i,j,arr[300],testcase,num;
    cin >> testcase;
    while (testcase){
        cin >> num;
        for (i=0;i<num;i++){
            cin >> arr[i];
        }
        j=num-1;
        for (i=0;i<num;i++){
            cout << arr[i] << " ";
            if (i!=j)
                cout << arr[j] << " ";
            if (i==j || i==j-1)
                break;
            j--;
        }
    cout << "\n";
    testcase--;
    }
    return 0;
}