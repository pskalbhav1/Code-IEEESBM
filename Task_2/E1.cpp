#include <iostream>
int main()
{
    int n;
    std::cout<<"Enter n ";
    std::cin>>n;
    std::cout<<"Fibonacci Series is ";
    for(int i=1,x=0, y=1; i<=n; i++)
    {
        if(i==1) std::cout<<x<<" ";
        else
        {
            int sum=x+y;
            x=y;
            y=sum;
            std::cout<<x<<" ";
        }
    }

    return 0;
}