#include <iostream>
int main()
{
    int n;
    std::cout<<"Enter n : ";
    std::cin>>n;
    bool chk3=false;
    bool chk5=false;
    if(n%3==0) chk3=true;
    if(n%5==0) chk5=true;

    if(chk3 && chk5) std::cout<<n<<" is a multiple of both 3 and 5.";
    else
    {
        if(chk3) std::cout<<n<<" is a multiple of 3.";
        else if(chk5) std::cout<<n<<" is a multiple of 5.";
        else std::cout<<n<<" is not multiple of 3 or 5.";
    }
    return 0;
}

