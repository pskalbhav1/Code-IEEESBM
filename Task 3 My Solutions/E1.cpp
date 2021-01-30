#include <iostream>
void print_even(int n)
{
    if(n==1) std::cout<<"No Even Numbers Found.";
    for(int x=2; x<n; x++)
    {
            if(x%2==0)
                std::cout<<x<<" ";
    }
}
int main()
{
    int n;
    std::cout<<"Enter n : ";
    std::cin>>n;
    print_even(n);
    return 0;
}


