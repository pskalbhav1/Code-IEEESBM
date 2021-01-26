#include <iostream>
using namespace std;

int main()
{
    int a , b , temp;
    cout<<"Enter the values :";
    cin>>a;
    cin>>b;

    temp = a;
    a = b;
    b = temp;

    cout << "\nAfter swapping.";
    cout << "a = " << a << ", b = " << b;

    return 0;
}
 
