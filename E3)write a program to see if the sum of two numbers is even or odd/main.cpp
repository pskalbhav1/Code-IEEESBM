#include <iostream>

using namespace std;

int main()
{
    int a, b,c;
    cout << "Enter two numbers:" << endl;
    cin>>a>>b;
    c=a+b;
    if(c%2==0)
    {
        cout<<"The sum is even"<<endl;
    }
    else
    {
        cout<<"the sum is odd";
    }
    return 0;
}
