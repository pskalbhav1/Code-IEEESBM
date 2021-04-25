#include <iostream>
using namespace std;

int main()
{
    int l = 0, b = 0;
    int area = 0;

    cout << ("Enter Length\n");
    cin >> l;
    cout << ("Enter Breadth\n");
    cin >> b;
    area = l * b;
    cout << "The area is : " << area << " sq.units";
}