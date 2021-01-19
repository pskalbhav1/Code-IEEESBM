#include<iostream>
int main()
{
    int a,b;
    std::cout<<"Enter first number : ";
    std::cin>>a;
    std::cout<<"Enter second number : ";
    std::cin>>b;
    std::cout<<"Sum = "<<(a+b)<<"\nDiffernce = "<<((a>b)?(a-b):(a-b))<<"\nMultiplication = "<<(a*b)<<"\nDivision = "<<(a/b);
    return 0;
}
