#include <stdio.h>
#include <stdlib.h>
int main()
{int a=0,b=0,c=0;
printf("Enter 3 numbers");
scanf("%d %d %d",&a,&b,&c);
   if(a>b && a>c)
  { printf("%d is largest",a);
   }
   else if(b>c && b>a)
    { printf("%d is largest",b);
     }
     else
    { printf("%d is largest",c);
    }
    return 0;
}
