#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

int main (){
    int arr[101],i=0,num,mx=0,mn=2000;
    cin >> num;
    for (i=1;i<=num;i++)
        cin >> arr[i];
    for (i=2;i<=num;i++)
        mx = max(mx,arr[i]-arr[i-1]);
    for (i=2;i<num;i++){
        mn=min(mn,max(mx,arr[i+1]-arr[i-1]));
    }
    cout << mn;    
    return 0;
}