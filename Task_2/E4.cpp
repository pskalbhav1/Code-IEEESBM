#include <iostream>
int main()
{
    int n;
    std::cout<<"Enter n : ";
    std::cin>>n;
    bool a3=false;
    bool a5=false;
    if(n%3==0) a3=true;
    if(n%5==0) a5=true;

    if(a3 && a5) std::cout<<n<<" is a multiple of both 3 and 5.";
    else
    {
        if(a3) std::cout<<n<<" is a multiple of 3.";
        else if(a5) std::cout<<n<<" is a multiple of 5.";
        else std::cout<<n<<" is not multiple of 3 or 5.";
    }
    return 0;
}