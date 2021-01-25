#include <iostream>
using namespace std;
int main() 
{

    int num, temp;
    int count = 0;
    cout << "Enter any number : ";
    cin >> num;
    temp = num;
    
    while(temp != 0) 
    {

        count++;
        temp /= 10;
    }

    cout << endl << "Total digits in " << num << " : "  << count;

    return 0;
}

