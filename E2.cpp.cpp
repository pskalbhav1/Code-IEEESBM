#include <iostream>

using namespace std;

int main()
{
    int p,q;
    cout << "Enter the values of num1 and num2:" << endl;
    cin>>p>>q;
    cout<<"the values are "<<p<<"and "<<q<<endl;
    p=p*q;
    q=p/q;
    p=p/q;
    cout<<"The new values are num1= "<<p<<"and num2= "<<q<<endl;
    return 0;
}
