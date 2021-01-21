#include <iostream>
using namespace std;
int main(){
    long long n;
    int counts=0;
    cout <<"Enter the number : ";
    cin >> n;
    while(n!=0){
        n/=10;
        ++counts;
    }
    cout << counts;

    return 0;
}