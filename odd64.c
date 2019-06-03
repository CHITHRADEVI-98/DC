#include <stdio.h>

int main()
{
   int a,b,sum;
   scanf("%d,%d",&a,&b);
   sum=a+b;
   if(sum%2==1)
   {
       printf("odd");
   }
   else
   {
       printf("even");
   }
}
