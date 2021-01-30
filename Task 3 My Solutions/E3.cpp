#include <iostream>
int noOfDigits(int n)
{
    if(n/10==0) return 1;
    else return noOfDigits(n/10)+1;
}
int main()
{
    int a;
    std::cout<<"Enter Number : ";
    std::cin>>a;

    std::cout<<"No. of digits in "<<a<<" is "<<noOfDigits(a);
    return 0;
}

