#include <stdio.h>
#include <stdlib.h>
int main()
{
   int a=0,b=0,s=0,d=0,m=0,div=0;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    s=a+b;
    d=a-b;
    m=a*b;
    div=a/b;
    printf("Sum=");
    printf("%d + %d = %d", a, b, s);
    printf("Difference=");
    printf("%d-%d=%d",a,b,d);
    printf("product=");
    printf("%d * %d=%d",m);
    printf("DIVISION=");
    printf("%d / %d = %d", a, b, div);

        return 0;
}
