#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter number : ";
    cin >> a;
    if (a % 3 == 0)
    {
        cout << "Multiple of 3";
    }
    else if (a % 5 == 0)
    {
        cout << "Multiple of 5";
    }
    else if (a % 5 == 0 & a % 3 == 0)
    {
        cout << "Multiple of 5 and 3";
    }
    else
    {
        cout << "Enter a valid number";
    }
}