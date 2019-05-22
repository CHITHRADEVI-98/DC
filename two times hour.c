#include <stdio.h>

int main()
{
   int a,b,c,x,y,z;
   scanf("%d%d",&a,&x);
   scanf("%d%d",&b,&y);
   a=a-b;
   x=x-y;
   c=abs(a);
   z=abs(x);
   printf("%d %d",c,z);

    return 0;
}
