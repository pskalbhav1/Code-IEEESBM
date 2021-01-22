#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num1, num2, temp;
   scanf("%d", &num1);
   scanf("%d", &num2);
   temp=num1;
   num1=num2;
   num2=temp;
   printf("number 1 = %d, number 2 = %d", num1, num2);
   return 0;
}
