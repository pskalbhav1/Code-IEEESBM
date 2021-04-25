#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cout << "Enter a number:";
    cin >> n;
    cout << "Even numbers between 1 and " << n << " are:" << endl;
    for (i = 1; i < n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << "\t";
        }
    }

    return 0;
}