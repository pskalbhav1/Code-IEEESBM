#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n: " << endl;
    cin >> n;
    int i, x;
    int a = 0;
    int b = 1;
    cout << "Fibonacci :" << endl;
    cout << a << " " << b << " ";

    for (int i = 2; i < n; i++)
    {
        x = a + b;
        a = b;
        b = x;
        cout << x << " ";
    }
    return 0;
}