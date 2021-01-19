#include<iostream>
int main()
{
    int a, b, c, greatest;
    std::cout<<"Enter first number : ";
    std::cin>>a;
    std::cout<<"Enter second number : ";
    std::cin>>b;
    std::cout<<"Enter third number : ";
    std::cin>>c;

    if(a>b)
    {
        if(a>c) greatest=a;
        else greatest=c;
    }
    else
    {
        if(b>c) greatest=b;
        else greatest=c;
    }
    std::cout<<"Greatest = "<<greatest;
    return 0;
}

