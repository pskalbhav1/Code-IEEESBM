#include <iostream>
int main()
{
    int a, b;
    std::cout<<"Enter number 1 : ";
    std::cin>>a;
    std::cout<<"Enter number 2 : ";
    std::cin>>b;
    if((a+b)%2==0) std::cout<<"The sum is even.";
    else std::cout<<"The sum is odd.";

    return 0;
}