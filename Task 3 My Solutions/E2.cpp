#include <iostream>
float multiply(int a, int b)
{
   return a*b;
}
float divide(int a, int b)
{
    return a/b;
}
float add(int a, int b)
{
    return a+b;
}
float subtract(int a, int b)
{
    return a-b;
}
int main()
{
    float a, b;
    std::cout<<"Enter Number 1 : ";
    std::cin>>a;
    std::cout<<"Enter Number 2 : ";
    std::cin>>b;

    std::cout<<"Multiplication : "<<multiply(a,b)<<"\nDivision : "<<divide(a,b)<<"\nAddition : "<<add(a,b)<<"\nSubtraction : "<<subtract(a,b);
    return 0;
}
