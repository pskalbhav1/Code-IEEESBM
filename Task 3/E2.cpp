#include<iostream>
using namespace std;

double add(double n1, double n2)
{
    return n1+n2;
}
double subtract(double n1, double n2)
{
    return n1-n2;
}
double multiply(double n1, double n2)
{
    return n1*n2;
}
double divide(double n1, double n2)
{
    return n1/n2;
}
int main()
{

  double num1, num2;

  cout << "Enter two Numbers :: ";
    cin >> num1 >> num2;

  cout << "Addition = "<< add(num1, num2);
  cout << "Subtraction = "<< subtract(num1, num2);
  cout << "Multiplication = "<< multiply(num1, num2);
  cout << "Division = "<< divide(num1, num2);
  return 0;
}