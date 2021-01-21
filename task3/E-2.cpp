#include <iostream>
using namespace std;
int main(){
    cout << "Enter first number :";
    int a;
    cin >>a;
    cout << "Enter second number :";
    int b;
    cin >>b;
    cout << "The sum is :" << a+b << endl;
    cout << "The difference is :" << a-b << endl;
    cout << "The product is :" << a*b << endl;
    cout << "The division is :" << (float)a/(float)b << endl;

    return 0;
}