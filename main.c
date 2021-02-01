#include <stdio.h>
int addition(int num1, int num2)
{
     int sum;
     sum = num1+num2;
     return sum;
}
int subtraction(int num1,int num2)
{
    int diff;
    if(num1>num2)
    diff=num1-num2;
    else
        diff=num2-num1;
    return diff;
}
int div(int num1,int num2)
{
    int div;
    if(num1>num2)
        div=num1/num2;
    else
        div=num2/num1;
        return div;
}
int multiplication(int num1,int num2)
{
    int m;
    m=num1*num2;
    return m;
}

int main()
{
     int var1, var2;
     printf("Enter number 1: ");
     scanf("%d",&var1);
     printf("Enter number 2: ");
     scanf("%d",&var2);
     int res = addition(var1, var2);
     int abc=subtraction(var1, var2);
     int pqr=multiplication(var1, var2);
     int mzn=div(var1, var2);
     printf ("Output: %d", res);
     printf ("Output: %d", abc);
     printf ("Output: %d", pqr);
     printf ("Output: %d", mzn);

     return 0;
}
