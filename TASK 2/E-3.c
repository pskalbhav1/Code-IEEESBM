#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num1, num2, sum;
   scanf("%d", &num1);
   scanf("%d", &num2);
   sum = num1 + num2;
   printf("%d", sum);
   if(sum%2 != 0){
    printf("\nThe sum is odd");
   }
    else{
        printf("\nThe sum is even");
    }

   return 0;
}
