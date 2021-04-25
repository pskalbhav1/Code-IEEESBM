#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the three numbers" << endl;
    cin >> a >> b >> c;

    if (a > b && a > c)
        cout << "The largest of the three is " << a;
    else if (b > a && b > c)
        cout << "The largest of the three is " << b;
    else
        cout << "The largest of the three is " << c;
}