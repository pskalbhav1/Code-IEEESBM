#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    cout << "Enter first number ";
    cin >> a;
    cout << "Enter second number ";
    cin >> b;
    c = a + b;
    if (c % 2 == 0)
    {
        cout << "The sum is even";
    }
    else
    {
        cout << "The sum is odd";
    }
    return 0;
}