
#include <iostream>
using namespace std;
int main()
{
    cout << "enter two numbers: ";
    int a, b, c;
    cout << "a= ";
    cin >> a;
    cout << "b= ";
    cin >> b;
    c = a;
    a = b;
    b = c;
    cout << "After Swapping a= " << a << "b= " << b;
}