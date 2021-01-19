#include<iostream>
int main()
{
    int a;
    std::cout<<"Enter a number : ";
    std::cin>>a;
    std::cout<<((a%2==0)?"Even":"Odd");
    return 0;
}
