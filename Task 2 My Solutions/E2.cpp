#include<iostream>
void swap_num(int *a, int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
int main()
{
    int a, b;
    std::cout<<"Enter number 1 : ";
    std::cin>>a;
    std::cout<<"Enter number 2 : ";
    std::cin>>b;
    swap_num(&a,&b);
    std::cout<<"After swapping : Number 1 is "<<a<<" and Number 2 is "<<b;
    return 0;

}
