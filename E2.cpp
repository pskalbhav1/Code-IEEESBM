#include<iostream>
using namespace std;
double add(double a, double b)
{
    return a+b;
}
double subtract(double a, double b)
{
    return a-b;
}
double multiply(double a, double b)
{
    return a*b;
}
double divide(double a, double b)
{
    return a/b;
}
int main()
{
    double a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
  cout << "Addition = "<< add(a,b);
  cout << " Subtraction = "<< subtract(a,b);
  cout << " Multiplication = "<< multiply(a,b);
  cout << " Division = "<< divide(a,b);
  return 0;
}
   
    