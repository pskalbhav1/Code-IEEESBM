#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    cin>>a;
    cin>>b;
     cout << "The numbers before the swapping are : a = " << a << ", and b = " << b << endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout << "The numbers after swapping :" << endl;
    cout << "a is : " << a << ", b is :" << b << endl;
    return 0;
    
}