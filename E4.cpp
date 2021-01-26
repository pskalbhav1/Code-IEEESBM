#include <iostream>

using namespace std;

int main()
{
    int num1,num2;
    cout << "Enter two numbers:" << endl;
    cin>>num1>>num2;
    num1=num1*num2;
    num2=num1/num2;
    num1=num1/num2;
    cout<<"now number 1 is "<<num1<<" and number 1 is "<<num2<<endl;
    return 0;
}
